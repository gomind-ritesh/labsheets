package QU1_II;

public class GradeBook {
private String module1Name;
private String module2Name;
private String module3Name;
private String module4Name;
private String module5Name;
private double mark1;
private double mark2;
private double mark3;
private double mark4;
private double mark5;

public GradeBook() {
module1Name = "Algorithms and Complexities";
mark1 = 100;

module2Name = "Operating System";
mark2 = 100;

module3Name = "WEB development";
mark3 = 100;

module4Name = "Software Enjeneering";
mark4 = 100;

module5Name = "OOT";
mark5 = 100;
}
public GradeBook(String module1Name, double mark1,String module2Name, double mark2,String module3Name, double mark3,String module4Name, double mark4,String module5Name, double mark5) {
this.module1Name = module1Name;
this.mark1 = mark1;
this.module2Name = module1Name;
this.mark2 = mark2;
this.module3Name = module1Name;
this.mark3 = mark3;
this.module4Name = module1Name;
this.mark4 = mark4;
this.module5Name = module1Name;
this.mark5 = mark5;
}
public void setModule1Name(String newModule1Name) {
module1Name = newModule1Name;
}

public void setModule2Name(String newModule2Name) {
module2Name = newModule2Name;
}

public void setModule3Name(String newModule3Name) {
module3Name= newModule3Name;
}

public void setModule4Name(String newModule4Name) {
module4Name = newModule4Name;
}

public void setModule5Name(String newModule5Name) {
module5Name = newModule5Name;
}

public String getModule1Name() { return module1Name; }
public String getModule2Name() { return module2Name; }
public String getModule3Name() { return module3Name; }
public String getModule4Name() { return module4Name; }
public String getModule5Name() { return module5Name; }



public void setMark1(double newMark1) { mark1 = newMark1; }
public void setMark2(double newMark2) { mark2 = newMark2; }
public void setMark3(double newMark3) { mark3 = newMark3; }
public void setMark4(double newMark4) { mark4 = newMark4; }
public void setMark5(double newMark5) { mark5 = newMark5; }

public double getMark1() { return mark1; }
public double getMark2() { return mark2; }
public double getMark3() { return mark3; }
public double getMark4() { return mark4; }
public double getMark5() { return mark5; }

public String toString() {
return "Mark for "+ module1Name + ": " + mark1 +" ; Mark for "+ module2Name + ": " + mark2+" ; Mark for "+ module3Name + ": " + mark3+" ; Mark for "+ module4Name + ": " + mark4+" ; Mark for "+ module5Name + ": " + mark5;
}
}