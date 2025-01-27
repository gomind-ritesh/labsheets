package QU1;

public class GradeBook {
private String moduleName;
private double mark;
public GradeBook() {
moduleName = "Algorithms and Complexities";
mark = 100;
}
public GradeBook(String moduleName, double mark) {
this.moduleName = moduleName;
this.mark = mark;
}
public void setModuleName(String newModuleName) {
moduleName = newModuleName;
}
public String getModuleName() { return moduleName; }
public void setMark(double newMark) { mark = newMark; }
public double getMark() { return mark; }
public String toString() {
return "Mark for "+ moduleName + ": " + mark;
}
}