#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>
using namespace std;

class Date
{
public:
	Date();
	Date(const Date& date);
	~Date();

	//Make seperate get Get and Set functions, Get functions only return values
	//Get Functions
	//void Get(int& month, int& day, int& year) const;
	int getMonth();
	int getDay();
	int getYear();
	
	//Set Functions
	//void Set(const int month, const int day, const int year);
	void setMonth(const int month);
	void setDay(const int day);
	
	void setYear(const int year);
	string Season();
	string Holiday();
	void Print() const;
	void Read();


private:
	int Month;
	int Day;
	int Year;

};

#endif

