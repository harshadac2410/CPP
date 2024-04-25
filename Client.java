package com.arraydemo;

import java.util.Scanner;

public class Client {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner in=new Scanner(System.in);
		int []arr;  //arr is reference for an array
		arr=new int[5]; //memory for 5 int is allocated on heap
		
		for(int i=0;i<arr.length;i++)
		{
			System.out.println("Enetr the ele:");
			arr[i]=in.nextInt();
		}
		
		for(int i=0;i<arr.length;i++)
		{
			System.out.println("ele-"+arr[i]);
		}
	}

}
