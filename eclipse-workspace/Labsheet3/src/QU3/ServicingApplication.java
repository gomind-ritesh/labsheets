package QU3;

import java.util.Scanner;

public class ServicingApplication {

	public static void main(String[] args) {
		
		Scanner scanin = new Scanner(System.in);
		
		Servicing Array[];
		int choice = 0;
		
		while( choice != -1) {
		System.out.println("Enter 1 to Create a new servicing object \n"
				+ "Enter 2 to displays all information for a servicing object \n"
				+"Enter 3 To display the average charge for servicing objects in the array"
				+"Enter -1 to stop the program");
		
		choice = scanin.nextInt();
		
		if( choice == 1) {
			
			int count = 0;
			for(int i =0; i<20 ;i++) {
				
				if(Array[i] == null) {
				count =i;
				break;
				}
				else {
					 System.out.println("Array is full  \n");
				}
			}		
			}else 
				if(choice == 2) {
					int snum;
					int position;
					
					System.out.println("Enter a servicing number  \n");
					snum = scanin.nextInt();
					
					for(int j =0; j<20 ;j++) {
						
						if(Array[j].getservicingNum() == snum) {
						System.out.println(Array[j].toString());
						break;
						}
						
						}
					}else
						if(choice == 3 ) {
							
							double sum = 0;
							double num = 0;
							
							for(int k= 0 ;k<20;k++) {
								
								if(Array[k] != null) {
									
									sum = sum+ Array[k].getcharge();
									num++;
								}
							}
							System.out.println("Average is : " + (sum/num));
							
							
						}
					
					
		
		}
		scanin.close();
	}
	
}
