package com.methodoverloadingdemo;

public class Client {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		int result=MathEngine.add(12, 5);
		String resultstring=MathEngine.add("Hello", " World");
		
		System.out.println("the addition of int "+result);
		System.out.println("the addition of string "+resultstring);
	}

}
