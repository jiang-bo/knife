package com.chenjw.knife.agent.handler.log.filter;

import java.util.HashSet;
import java.util.Set;

import com.chenjw.knife.agent.Profiler;
import com.chenjw.knife.agent.event.Event;
import com.chenjw.knife.agent.event.MethodEnterEvent;
import com.chenjw.knife.agent.event.MethodExceptionEndEvent;
import com.chenjw.knife.agent.event.MethodLeaveEvent;
import com.chenjw.knife.agent.event.MethodReturnEndEvent;
import com.chenjw.knife.agent.event.MethodStartEvent;
import com.chenjw.knife.agent.event.MethodTraceEvent;
import com.chenjw.knife.agent.service.InvokeDepthManager;

public class TimesCountFilter implements Filter {
	private Set<Thread> threadSet = new HashSet<Thread>();
	private int num;

	public TimesCountFilter(int num) {
		this.num = num;
	}

	private synchronized boolean decrementAndGet() {
		if (num > 0) {
			num--;
			return true;
		} else {
			return false;
		}
	}

	private boolean contains() {
		Thread thread = Thread.currentThread();
		return threadSet.contains(thread);
	}

	@Override
	public void doFilter(Event event, FilterChain chain) throws Exception {
		if (event instanceof MethodEnterEvent) {
			if (InvokeDepthManager.getInstance().getDep() == -1) {
				if (decrementAndGet()) {
					chain.doFilter(event);
					Thread thread = Thread.currentThread();
					threadSet.add(thread);
				}
			}
		} else if (event instanceof MethodLeaveEvent) {
			if (InvokeDepthManager.getInstance().getDep() == 0) {
				chain.doFilter(event);
				Thread thread = Thread.currentThread();
				threadSet.remove(thread);
				if (num == 0 && threadSet.size() == 0) {
					Profiler.listener = null;
				}
			}
		} else if (event instanceof MethodStartEvent) {
			if (contains()) {
				chain.doFilter(event);
			}
		} else if (event instanceof MethodReturnEndEvent) {
			if (contains()) {
				chain.doFilter(event);
			}
		} else if (event instanceof MethodExceptionEndEvent) {
			if (contains()) {
				chain.doFilter(event);
			}
		} else if (event instanceof MethodTraceEvent) {
			if (contains()) {
				chain.doFilter(event);
			}
		}

	}

}
