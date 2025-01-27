package QU1;

public class GradeBookApplication {

	public static void main(String[] args) {
		
		GradeBook gradeBook1 = new GradeBook() ;
		
		GradeBook gradeBook2=  new GradeBook("Object-Oriented Techniques",90) ;
		
		System.out.println(gradeBook1.toString());
		
		System.out.println(gradeBook2.toString());

	}

}
