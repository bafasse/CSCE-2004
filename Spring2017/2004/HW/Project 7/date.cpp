// date.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "date.h"

Date::Date()
{
	//Constructor
	Month = 1;
	Day = 1;
	Year = 2000;
	cout << "Constructor" << endl;
}

Date::Date(const Date& date)
{
	//Copy Constructor
	Month = date.Month;
	Day = date.Day;
	Year = date.Year;
	cout << "Copy Constructor" << endl;
}

Date::~Date()
{
	//Destructor function
	cout << "Destructor" << endl;
}

int Date::getMonth()
{
	//returns private variable 
	return Month;
}

int Date::getDay()
{
	//returns private variable
	return Day;
}

int Date::getYear()
{
	//returns private variable
	return Year;
}

void Date::setMonth(const int month)
{
	//Sets private variable Month
	Month = month;
}

void Date::setDay(const int day)
{
	//Sets private variable Day
	Day = day;
}

void Date::setYear(const int year)
{
	//Sets private variable Year
	Year = year;
}

string Date::Season()
{
	//Prints out Season
	cout << "Season" << endl;
	if (Month == 12 || Month <=2)
		return "Winter";
	else if (Month >= 3 && Month <= 5 )
		return "Spring";
	else if (Month >= 6 && Month <= 8)
		return "Summer";
	else if (Month >= 9 && Month <= 11)
		return "Fall";
}

string Date::Holiday()
{
	//Prints out if the date is a holiday
	cout << "Holiday" << endl;
	/*if (Month == 1 && Day == 1)
		return "New Years";
	else if (Month == 7 && Day == 4)
		return "Independence Day";
	else if (Month == 10 && Day == 31)
		return "Halloween";
	else if (Month == 12 && Day == 25)
		return "Christmas";
	else
		return "a normal day.";*/
}

void Date::Print() const
{
	//Prints private variables
	cout << Month << "/" << Day << "/" << Year << endl;
	cout << "Print" << endl;
}

void Date::Read()
{
	//Reads in user input
	cout << "Enter the date in (MM/DD/YYYY) format: ";
	cin >> Month >> Day >> Year;

	while (Month == 2 && Day > 28)
	{
		cout << "There are only 28 days in February. Try Again." << endl;
		cout << "Enter the date in (MM/DD/YYYY) format: ";
		cin >> Month >> Day >> Year;
	}

	while (Month > 12 || Month < 1)
	{
		cout << "There are only 12 months. Try Again." << endl;
		cout << "Enter the date in (MM/DD/YYYY) format: ";
		cin >> Month >> Day >> Year;
	}

	while (Day < 1 || Day > 31)
	{
		cout << "There are no more than 31 days in a month. Try Again." << endl;
		cout << "Enter the date in (MM/DD/YYYY) format: ";
		cin >> Month >> Day >> Year;
	}

	cout << "Read" << endl;
}

int main()
{
	cout << "Testing Date class\n";
	Date date1;
	Date date2(date1);
	date1.setMonth(12);
	date1.setDay(25);
	date1.setYear(2015);
	date1.Print();
	cout << "It is " << date1.Season() << endl;
	cout << "It is " << date1.Holiday() << endl;
	date2.setMonth(7);
	date2.setDay(4);
	date2.setYear(1996);
	date2.Print();
	cout << "It is " << date2.Season() << endl;
	cout << "It is " << date2.Holiday() << endl;
	Date date3(date1);
	date3.Read();
	date3.Print();
	cout << "It is " << date3.Season() << endl;
	cout << "It is " << date3.Holiday() << endl;
    return 0;
}



