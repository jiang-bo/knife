package com.chenjw.knife.agent.handler.log.filter;

import com.chenjw.knife.agent.event.Event;

public class SystemOperationFilter implements Filter {
	private volatile boolean isOnSystemOperation = false;

	private void enterSystemOperation() {
		isOnSystemOperation = true;
	}

	private void leaveSystemOperation() {
		isOnSystemOperation = false;
	}

	@Override
	public void doFilter(Event event, FilterChain chain) throws Exception {

		if (isOnSystemOperation) {
			return;
		}
		try {
			enterSystemOperation();
			chain.doFilter(event);
		} finally {
			leaveSystemOperation();
		}
	}

}
