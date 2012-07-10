package com.chenjw.knife.test.impl;

import com.chenjw.knife.test.ApplyModel;
import com.chenjw.knife.test.ResultModel;
import com.chenjw.knife.test.Test1Service;
import com.chenjw.knife.test.TestService;

public class TestServiceImpl implements TestService {
	private Test1Service test1Service;
	private boolean testBoolean = false;
	private byte testByte = 1;
	private char testChar = '2';
	private short testShort = 3;
	private int testInt = 4;
	private long testLong = 5;
	private float testFloat = 6;
	private double testDouble = 7;

	private String testStr = "8";

	@Override
	public ResultModel apply(ApplyModel apply) {
		if (testStr.equals(apply.getName())) {
			ResultModel r = new ResultModel();
			r.setSuccess(true);
			return r;
		} else {
			try {
				test1Service.doApply(apply);
				ResultModel r = new ResultModel();
				r.setSuccess(true);
				return r;
			} catch (Exception e) {
				ResultModel r = new ResultModel();
				r.setSuccess(false);
				return r;
			}
		}
	}

	public void setTest1Service(Test1Service test1Service) {
		this.test1Service = test1Service;
	}

}