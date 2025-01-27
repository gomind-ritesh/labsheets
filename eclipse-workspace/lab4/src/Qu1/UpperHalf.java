package Qu1;

import java.util.Scanner;

public class UpperHalf {
	
	public static void upperhalf(int arr[][], int m ,int n)
	{
		for(int i =0; i< m ;i ++)
		{
			for(int j= (n-1);j >=0 ;j--)
			{
				System.out.println(arr[i][j]+ " ");
			}
			System.out.println("\n");
		}
	}
	
	
public static void main(String[] args) {
		
	int m,n;
	Scanner scanIn = new Scanner(System.in);
		
		
	System.out.println("Enter the value of m \n");
	m = scanIn.nextInt();
		
	System.out.println("Enter the value of n \n");
	n = scanIn.nextInt();
		
	int[][] arr = new int[m][n];
		
	for(int i =0; i< m ;i ++)
	{
	    for(int j= 0;j <n ;j++)
			{
				System.out.println("Enter element " + i +" " +j+"\n");
				arr[i][j]= scanIn.nextInt();
			}
		}
	
		
	}
    upperhalf(arr,m,n);

}
