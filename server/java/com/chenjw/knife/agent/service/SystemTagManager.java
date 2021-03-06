package com.chenjw.knife.agent.service;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.IdentityHashMap;
import java.util.Map;
import java.util.Map.Entry;

import com.chenjw.knife.agent.util.NativeHelper;

public class SystemTagManager implements Lifecycle {

	private static final SystemTagManager INSTANCE = new SystemTagManager();
	static {
		ServiceManager.getInstance().register(INSTANCE);
	}
	private Map<String, Object> systemTags = new HashMap<String, Object>();
	{
		registerSystemTag("SYSTEM_TAGS", systemTags);
	}

	public static SystemTagManager getInstance() {
		return INSTANCE;
	}

	public String findSystemName(Object obj) {
		for (Entry<String, Object> entry : systemTags.entrySet()) {
			Object o = entry.getValue();
			if (obj == o) {
				return entry.getKey();
			} else if (o instanceof HashMap) {
				Object oo = NativeHelper.findFieldValue(o, "table");
				if (oo == obj) {
					return entry.getKey() + ".table";
				}
			} else if (o instanceof ArrayList) {
				Object oo = NativeHelper.findFieldValue(o, "elementData");
				if (oo == obj) {
					return entry.getKey() + ".elementData";
				}
			} else if (o instanceof IdentityHashMap) {
				Object oo = NativeHelper.findFieldValue(o, "table");
				if (oo == obj) {
					return entry.getKey() + ".table";
				}
			}
		}
		return null;
	}

	public void registerSystemTag(String name, Object obj) {
		systemTags.put(name, obj);
	}

	@Override
	public void init() {

	}

	@Override
	public void clear() {

	}

}
