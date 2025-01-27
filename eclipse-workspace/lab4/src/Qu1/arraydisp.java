package Qu1;

public class arraydisp {

	public static void upperHalf(int[][] myArray) {
		// TODO Auto-generated method stub
		int m= myArray.length; //Number of rows
    	int n = myArray[0].length; // Number of columns
    	
    	for (int i=0;i<m ; i++) {
    		for( int j =0;j<i;j++) {  //Print leading spaces for the lower half
    			System.out.print(" ");
    		}
    		for (int j=i;j<n;j++) { // Print upper half elements
    			System.out.print(myArray[i][j] + "");
    		}
    		System.out.println(); // Move to next line after each row
    	}
    }
	public static void main(String[] args) {
		// TODO Auto-generated method stub
      int[][] myArray = { {1,2,3},{4,5,6},{7,8,9}};
      System.out.println("Upper half of the array:");
      upperHalf(myArray);
 }
}



