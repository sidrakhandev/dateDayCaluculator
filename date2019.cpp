//This file contains the definitions of member functions of class date2019
#include "pch.h"
#include "date2019.h"
#include <iostream>
#include <string>
using namespace std;
int daysinmonth[13] = { 1,31,28,31,30,31,30,31,31,30,31,30,31};

date2019::date2019()              //Default constructor 
{                      //default values of month and date is 1
	date = 1;   
	month = 1;
	cout << "This is the default constructor for the class date2019 : "
		<< month << " " << date << " " << year << endl;  //output January 1 2019

}
date2019::date2019(int dd)        //one parameter constuctor
{
	//else ifs statements for particular month
	if ((dd >= 1) && (dd <= 365))   //if statement checking the validation of days in a year
	{
		
		                          //else ifs statements for particular month
		if ((dd >= 1) && (dd <= 31))   
		{
			date = dd;
			month = 1;
			//cout << "January  " <<" "<< date <<" " <<year<<endl;
		}
		else if ((dd > 31) && (dd <= 59))
		{
			date = dd - 31;
			month = 2;
			//cout << "Feburary  " << " " << date << " " << year << endl;
		}
		else if (dd > 59 && dd <= 90)
		{
			date = dd - 59;
			month = 3;
			//cout << "March  " << " " << date << " " << year << endl;
		}
		else if (dd > 90 && dd <= 120)
		{
			date = dd - 90;
			month = 4;
			//cout << "April  " << " " << date << " " << year << endl;
		}
		else if (dd > 120 && dd <= 151)
		{
			date = dd - 120;
			month = 5;
			//cout << "May  " << " " << date << " " << year << endl;
		}
		else if (dd > 151 && dd <= 181)
		{
			date = dd - 151;
			month = 6;
			//cout << "June  " << " " << date << " " << year << endl;
		}
		else if (dd > 181 && dd <= 212)
		{
			date = dd - 181;
			month = 7;
			//cout << "July  " << " " << date << " " << year << endl;
		}
		else if (dd > 212 && dd <= 243)
		{
			date = dd - 212;
			month = 8;
			//cout << "August  " << " " << date << " " << year << endl;
		}
		else if (dd > 243 && dd <= 273)
		{
			date = dd - 243;
			month = 9;
			//cout << "September  " << " " << date << " " << year << endl;
		}

		else if (dd > 273 && dd <= 304)
		{
			date = dd - 273;
			month = 10;
			//cout << "October  " << " " << date << " " << year << endl;
		}

		else if (dd > 304 && dd <= 334)
		{
			date = dd - 304;
			month = 11;
			//cout << "November  " << " " << date << " " << year << endl;
		}
		else if (dd > 334 && dd <= 365)
		{
			date = dd - 334;
			month = 12;
			//cout << "December  " << " " << date << " " << year << endl;


		}
		else { cout << "/n  Date is not in the year 2019 "; }
	}

	else { date = -1, month = -1; }   //else statement of first if which sets the date and month -1 
	//if date is not in year 2019

}
date2019::date2019(int dd, int mm)      //overloaded constructor
{
	if ((mm == 1) || (mm == 3) || (mm == 5) || (mm == 7) ||  
		(mm == 8) || (mm == 10) || (mm == 12))    //checking the validation of days 
	{
		if ((dd >= 1) && (dd <= 31))
		{
			date = dd;
			month = mm;
			
		}
			
		else { date = -1, month = -1;
		cout << " Date is not in the year 2019"; }
	}

	if ((mm == 4) || (mm == 6) || (mm == 9) || (mm == 11))
	{
		if ((dd >= 1) && (dd <= 30))
		{
			date = dd;
			month = mm;
			
		}
		else {
			date = -1, month = -1;
			cout << " Date is not in the year 2019";
		}
	}
	if ((mm == 2))
	{
		if ((dd >= 1) && (dd <= 28))
		{
			date = dd;
			month = mm;
			
		}
		else {
			date = -1, month = -1;
			cout << " Date is not in the year 2019";
		}
	}
}
void date2019::setdate(int dd, int mm)
{
	if ((mm == 1) || (mm == 3) || (mm == 5) || (mm == 7) ||
		(mm == 8) || (mm == 10) || (mm == 12))
	{
		if ((dd >= 1) && (dd <= 31))
		{
			date = dd;
			month = mm;
			
		}
		else {
			date = -1, month = -1;
			cout << " Date is not in the year 2019";
		}
	}

	if ((mm == 4) || (mm == 6) || (mm == 9) || (mm == 11))
	{
		if ((dd >= 1) && (dd <= 30))
		{
			date = dd;
			month = mm;
			
		}
		else {
			date = -1, month = -1;
			cout << " Date is not in the year 2019";
		}
	}
	if ((mm == 2))
	{
		if ((dd >= 1) && (dd <= 28))
		{
			date = dd;
			month = mm;
			
		}
		else {
			date = -1, month = -1;
			cout << " Date is not in the year 2019";
		}
	}
}
void date2019::print()   //print functions which displays the date

{
	//string array which stores the days of week
	string day[7] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
	int index = 0;
	switch (month)   //swtich  statements for displaying the date of a particular month

	{
	case 1:
	{
		index = date % 7;
		cout << day[index] << " January " << date << " " << year;
		break;
	}

	case 2:
	{
		index = (date + 31) % 7;
		cout << day[index] << " Feburary " << date << " " << year;
		break;

	}

	case 3:
	{
		index = (date + 59) % 7;
		cout <<day[index] << " March " << date << " " << year;
		break;
	}
	case 4:
	{
		index = (date + 90) % 7;
		cout << day[index] << " April " << date << " " << year;
		break;
	}

	case 5:
	{
		index = (date + 120) % 7;
		cout << day[index] << " May " << date << " " << year;
		break;
	}
	case 6:
	{
		index = (date + 151) % 7;
		cout << day[index] << " June " << date << " " << year;
		break;
	}
	case 7:
	{
		index = (date + 181) % 7;
		cout <<"  "<< day[index] << " July " << date << " " << year;
		break;
	}
	case 8:
	{
		index = (date + 212) % 7;
		cout << day[index] << " August " << date << " " << year;
		break;
	}
	case 9:
	{
		index = (date + 243) % 7;
		cout << day[index] << " September " << date << " " << year;
		break;
	}
	case 10:
	{
		index = (date + 273) % 7;
		cout << day[index] << " October " << date << " " << year;
		break;
	}

	case 11:
	{
		index = (date + 304) % 7;
		cout  <<day[index] << " November " << date << " " << year;
		break;
	}

	case 12:
	{
		index = (date + 334) % 7;
		cout << day[index] << " December " << date << " " << year;
		break;
	}
	default:
		cout << "Date is not in the year 2019 ";
	}
}
void  date2019::plusday(int days)    //plusday function which update date by updating days 
{

	int Date = 0;
	switch (month)    //use of switch statements
	{

	case 1:
	{
		Date = date + days;
		break;
	}
	case 2:
	{
		Date = date + days + 31;
		break;
	}
	case 3:
	{
		Date = date + days + 59;
		break;
	}
	case 4:
	{
		Date = date + days + 90;
		break;
	}
	case 5:
	{
		Date = date + days + 120;
		break;
	}
	case 6:
	{
		Date = date + days + 151;
		break;
	}
	case 7:
	{
		Date = date + days + 181;
		break;
	}
	case 8:
	{
		Date = date + days + 212;
		break;
	}
	case 9:
	{
		Date = date + days + 243;
		break;
	}
	case 10:
	{
		Date = date + days + 273;
		break;
	}
	case 11:
	{
		Date = date + days + 304;
		break;
	}
	case 12:
	{
		Date = date + days + 334;
		break;
	}
	
	}
	date2019 afterDate(Date);  //prints the update days
	cout << days<<" " << "days after the current date "<<endl;
	cout << "current date:" ;
	print();
	cout << "\nupdate after plusdays :" << endl;
	afterDate.print();
	cout << endl;
}

	date2019::~date2019()   //definition  of destructor
	{
		
	}