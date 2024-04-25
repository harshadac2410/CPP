package com.classdemo;

public class Product {
	
	//to achieve encapsulation data-private and methods-public
	//data
	private int pid;
	private String pname;
	private double price;
	
	//no-para constructor
	public Product()
	{
		pid=0;
		pname="NA";
		price=0.0;
	}
	
	public Product(int id,String name,double pr)
	{
		pid=id;
		pname=name;
		price=pr;
	}

	
	//methods
	/*public void printDetails()
	{
		System.out.println("pid-"+pid+" name-"+pname+" price-"+price);
	}*/
	

	public String toString()
	{		
		return "pid-"+pid+" name-"+pname+" price-"+price;
	}

}
