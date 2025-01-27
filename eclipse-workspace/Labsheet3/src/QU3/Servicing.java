package QU3;

public class Servicing {

private int servicingNum;
private String registrationNum;
private String ownerName ;
private double charge;

public Servicing() {
	
	servicingNum = 0;
	registrationNum = " ";
	ownerName = " ";
	charge = 0.0;
}
public Servicing(int servicingNum,String registrationNum,String ownerName, double charge) {
    
	this.servicingNum = servicingNum;
    this.registrationNum = registrationNum;
    this.ownerName = ownerName;
    this.charge = charge;
}

public void setservicingNum(int newservicingNum) {
	servicingNum = newservicingNum;
}

public void setregistrationNum(String newregistrationNum) {
	registrationNum = newregistrationNum;
}

public void setownerName(String newownerName) {
	ownerName = newownerName;
}
public void setcharge(double newcharge) {
	charge = newcharge;
}


public int getservicingNum() { return servicingNum; }
public String getregistrationNum() { return registrationNum; }
public String getownerName() { return ownerName; }
public double getcharge() { return charge; }

public String toString() {
return "Service number is "+ servicingNum + " Registration number is " + registrationNum +" owner name is " + ownerName+" charge is " + charge;
}
}