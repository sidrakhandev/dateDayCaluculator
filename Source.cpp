// projOOP.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include "pch.h"
#include <iostream>
#include<fstream>
#include "date2019.h"

using namespace std;
int main()
{

	int date, month, plusdays;
	date2019 D1(31);
	ifstream inFile;
	inFile.open("Data.txt");
	inFile>>month >>date >> plusdays;
	date2019 obj1(date, month);
	//obj1.print();
	cout << endl;
	obj1.plusday(plusdays);
	//obj1.print();
	inFile >> month >> date >> plusdays;
	date2019 obj2(date, month);
	//obj2.print();
	cout << endl;
	obj2.plusday(plusdays);
	//obj2.print();
	inFile >> month >> date >> plusdays;
	date2019 obj3(date, month);
	//obj3.print();
	cout << endl;
	obj3.plusday(plusdays);
	//obj3.print();
	inFile.close();
	system("pause");
	
	return 0;
}