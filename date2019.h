//This is header file which contains the declarations of class date2019
#pragma once
// class date2019
class date2019
{
private:     //private data members
	int date, month;
	const int year = 2019;   //year is const because it has same value throughout the program
public:   //public member functions/methods
	date2019();
	date2019(int dd);
	date2019(int dd, int mm);
	void setdate(int dd, int mm);
	void print();
	void plusday(int days);
	~date2019();
};

