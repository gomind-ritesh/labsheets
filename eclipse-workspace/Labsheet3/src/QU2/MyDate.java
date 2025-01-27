package QU2;

import java.util.Date;

public class MyDate {
	
	private int day;
	private int month;
	private int year;
	
	public MyDate() {
	day = 00;
	month = 00;
	year = 0000;

	}
	public MyDate(int day, int month, int year) {
	this.day = day;
	this.month = month;
	this.year = year;
	}
	
	/*
	public void setday(int newday) {
	day = newday;
	}
	
	public void setmonth(int newmonth) {
	month = newmonth;
	}
	
	public void setyear(int newyear) {
	year = newyear;
	}
	*/
	public void assignDate(int newday,int newmonth,int newyear) {
	
		day = newday;
		month = newmonth;
		year = newyear;
	}
	
	/*
	public int getday() { return day; }
	public int getmonth() { return month; }
	public int getyear() { return year; }
	*/
	
	public String displayshort() {
		Date date = new Date(year,month,day);
	    return "Mark for "+ moduleName + ": " + mark;
	}
	
}
