// hw6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include<array>
#include <fstream>
using namespace std;

class Course 
{
public:
	Course();
	void get(string& name, string &time, string& number, char& g, int& h) const;

	void set(string name, string time, string number, char g, int h);
	void print() const;
private:    
	string courseName;    
	string courseTime;    
	string courseNumber;    
	char grade;    
	int hours;
};


Course::Course() 
{
	courseName = "Programming Foundations 1";
	courseTime = "Fall 2015";
	courseNumber = "CSCE 2004";
	grade = 'A';
	hours = '4';
}

void Course::get(string& name, string &time, string& number, char& g, int& h) const
{
	name = courseName;
	time = courseTime;
	number = courseNumber;
	g = grade;
	h = hours;
}

void Course::set(string name, string time, string number, char g, int h)
{
	courseName = name;
	courseTime = time;
	courseNumber = number;
	grade = g;
	hours = h;
}
void Course::print() const
{
	cout << courseName << endl;
	cout << courseTime << endl;
	cout << courseNumber << endl;
	cout << grade << endl;
	cout << hours << endl;
}

//A
double gpa(int n, const Course courses[]) 
{
	double gpaScore = 0;
	int totalHours  = 0;
	for (int x = 0; x < n; x++) 
	{
		string name, time, number;
		char grade;
		int hours;
		courses[x].get(name, time, number, grade, hours);

		double score = 0.0;

		if (grade == 'A' || grade == 'a')
			score = 4.0;
		else if (grade == 'B' || grade == 'b')
			score =  3.0;
		else if (grade == 'C' || grade == 'c')
			score = 2.0;
		else if (grade == 'D' || grade == 'd')
			score = 1.0;
		else if (grade == 'F' || grade == 'f')
			score = 0.0;

		if ((grade != 'W' || grade != 'w') && (grade != 'I' || grade != 'i'))
		{
			gpaScore += score * hours;
			totalHours = totalHours + hours;
		}
	}
	if (totalHours != 0)
		return gpaScore / totalHours;
	else return -1;
}

//B
void print(int n, Course courses[]) 
{
	for (int x = 0; x < n; x++) 
	{
		string name, time, number;
		char grade;
		int hours;
		courses[x].get(name, time, number, grade, hours);

		cout << name << endl;
		cout << time << endl;
		cout << number << endl;
		cout << grade << endl;
		cout << hours << endl;
		cout << endl;
	}
}

//C
int DRule(int n, Course courses[]) 
{
	int total = 0;
	for (int x = 0; x < n; x++)
	{
		string name, time, number;
		char grade;
		int hours;
		courses[x].get(name, time, number, grade, hours);
		if (grade == 'D' || grade == 'd')
			total += hours;
	}

	return total;
} 

//D
double semesterGPA(int n, Course courses[], string semester) 
{
	double gpaScore = 0;
	int totalHours = 0;
	for (int x = 0; x < n; x++)
	{
		string name, time, number;
		char grade;
		int hours;
		courses[x].get(name, time, number, grade, hours);

		if (time == semester)
		{
			double score = 0.0;

			if (grade == 'A' || grade == 'a')
				score = 4.0;
			else if (grade == 'B' || grade == 'b')
				score = 3.0;
			else if (grade == 'C' || grade == 'c')
				score = 2.0;
			else if (grade == 'D' || grade == 'd')
				score = 1.0;
			else if (grade == 'F' || grade == 'f')
				score = 0.0;

			if ((grade != 'W' || grade != 'w') && (grade != 'I' || grade != 'i'))
			{
				gpaScore += score * hours;
				totalHours = totalHours + hours;
			}
			else
				totalHours = 0;
		}
	}
	if (totalHours != 0)
		return gpaScore / totalHours;
	else return -1;
}

//E
void getCourse(Course& courses, int n)
{
	    
		string name, time, number;
		char grade;
		int hours;

		cout << endl;
		cout << "Please Enter The Name Of The Class.\n" << endl;
		getline(cin, name);

		cout << "Please Enter The Semester You Took " << name << " (i.e Fall 2016)\n";
		getline(cin, time);

		cout << "Please Enter The Course Number For " << name << " (i.e CSCE 2004, MATH 2564, CSCE 2114)\n";
		getline(cin, number);

		cout << "Please Enter The Letter Grade (A,B,C,D,F,W,I) For " << name << endl;
		cin >> grade;
		cin.ignore();

		while (!(grade == 'A' || grade == 'a') && !(grade == 'B' || grade == 'b') && !(grade == 'C' || grade == 'c') && !(grade == 'D' || grade == 'd') && !(grade == 'F' || grade == 'f') && !(grade == 'W' || grade == 'w') && !(grade == 'I' || grade == 'i')) {
			cout << "There Seems To Have Been An Error. Please input a Letter Grade" << endl;
			cin >> grade;
			cin.ignore();
		}

		cout << "Please Enter The Number Of Hours For " << name << endl;
		cin >> hours;
		cin.ignore();

		while (hours < 0 || hours > 5)
		{
			cout << "There Seems To Have Been An Error. Please Enter The Number Of Hours For " << name << " (1-5)" << endl;
			cin >> hours;
			cin.ignore();
		}
		courses.set(name, time, number, grade, hours);
}

//F
void deleteCourse(int& n, Course courses[], int deleteCourse)
{
	string name, time, number;
	char grade;
	int hours;
	courses[n-1].get(name, time, number, grade, hours);
	courses[deleteCourse].set(name, time, number, grade, hours);
	n--;
}


char menu( )
{
	cout << "Welcome to the interactive menu-driven part of the GPA and Course storage program.\n";
	cout << "Please enter the character next to the choice you wish to pick.\n";
	cout << "Here are your options: \n";
	cout << "A(a): Compute the GPA of all courses.\n";
	cout << "B(b): List all courses.\n";
	cout << "C(c): Compute the total credit hours of the courses with grade D.\n";
	cout << "D(d): Compute the GPA for a particular semester.\n";
	cout << "E(e): Add another course to the list.\n";
	cout << "F(f): Delete a course from the course list.\n";
	cout << "Q(q): Quit the Program.\n";
	cout << endl;
	cout << "Please choose from the following options\n";

	char userInput;
	cin >> userInput;

	// Validation here
	while (!(userInput == 'A' || userInput == 'a') && !(userInput == 'B' || userInput == 'b') && !(userInput == 'C' || userInput == 'c') && !(userInput == 'D' || userInput == 'd') && !(userInput == 'E' || userInput == 'e') && !(userInput == 'F' || userInput == 'f') && !(userInput == 'Q' || userInput == 'q')) 
	{
		cout << "Your input is invalid.\n";
		cin >> userInput;
	}

	return userInput;
}

bool reading(const char filename[], Course courses[], int& n, int capacity) 
{
	ifstream din;
	din.open(filename);

	if (!din)
		return false;

	din >> n;
	din.get();

	if (n > capacity) 
	{
		cout << "The capacity of the file is too big for the array. The size of the array is " << capacity << endl;
		return false;
	}

	for (int x = 0; x < n; x++) 
	{
		string name, time, number;
		char grade;
		int hours;
		

		getline(din, name);
		getline(din, time);
		getline(din, number);
		din >> grade;
		din.get();
		din >> hours;
		din.get();
		courses[x].set(name, time, number, grade, hours);
	}
	din.close();
	return true;
}

bool writing(const char filename[], Course courses[], int n) 
{
	//This Works. DO NOT TOUCH!!
	ofstream dout;
	dout.open(filename);

	if (!dout) 
	{
		cout << "The File was not able to be created\n";
		return false;
	}

	dout << n << endl;
	for (int x = 0; x < n; x++)
	{
		string name, time, number;
		char grade;
		int hours;
		courses[x].get(name, time, number, grade, hours);

		dout << name << endl;
		dout << time << endl;
		dout << number << endl;
		dout << grade << endl;
		dout << hours << endl;
	}

	dout.close();
	return true;
}


int main()
{
	const int SIZE = 10;
	Course courses[SIZE];
	int numClasses = 0;

	cout << "Would you like to use the file provided\n";
	cout << "Y/N\n";
	char input;
	cin >> input;

	while ((input != 'Y' && input != 'y') && (input != 'N' && input != 'n'))
	{
		cout << "Please enter either Y for yes or N for No.\n";
		cin >> input;
	}

	if (input == 'Y' || input == 'y')
	{
		
		string filename = "courses.txt";

		if (input == 'Y' || input == 'y')
		{
			if (reading(filename.c_str(), courses, numClasses, SIZE) == false)
			{
				cout << "The file could not be found.\n";
				cout << "\n======terminating...======\n";
				return 1;
			}
		}

		}

		if (input == 'N' || input == 'n')
		{
			cout << "Welcome to the GPA Calculator\n";
			cout << "Please Enter How Many Classes You Are Taking\n";
			cin >> numClasses;
			cin.ignore();

			while (numClasses <= 0 || numClasses > SIZE)
			{
				cout << "Please Input A Positive Whole Number That Is Between 1 and " << SIZE << endl;
				cin >> numClasses;
				cin.ignore();
			}

			for (int i = 0; i < numClasses; ++i)
				getCourse(courses[i], i);
		}

		do
		{
			input = menu();

			if (input == 'A' || input == 'a') 
				if (gpa(numClasses, courses) == -1)
					cout << "Your GPA could not be computed.\n" << endl;
				else
					cout << "You GPA is " << gpa(numClasses, courses) << endl << endl;
			
			if (input == 'B' || input == 'b')
				print(numClasses, courses);

			if (input == 'C' || input == 'c')
				if (DRule(numClasses, courses) == 0)
					cout << "You have no D's.\n" << endl;
				else
					cout << "The total number of hours of the classes with a letter grade D is " << DRule(numClasses, courses) << endl << endl;

			if (input == 'D' || input == 'd') 
			{
				string sem;
				cin.ignore();
				cout << "Which semester do you want?" << endl;
				getline(cin, sem);

				if (semesterGPA(numClasses, courses, sem) == -1)
					cout << "The GPA for the " << sem << " semester could not be computed or does not exist (Mind your spelling).\n" << endl;
				else
					cout << "The GPA for the " << sem << " semester is " << semesterGPA(numClasses, courses, sem) << endl << endl;
			}

			if (input == 'E' || input == 'e') 
			{
				cin.ignore();
				getCourse(courses[numClasses], numClasses);
				numClasses++;
			}

			if (input == 'F' || input == 'f') 
			{
				int courseNumber = 1;
				cout << "Enter the number of the course you would like to delete.\n";
				cin >> courseNumber;
				while (courseNumber <= -0.999 || courseNumber > SIZE) {
					cout << "You have entered a number that is larger than the array. Please enter a number between 0 and 10.\n";
					cin >> courseNumber;
				}
				deleteCourse(numClasses, courses, courseNumber);
			}

			if (input == 'Q' || input == 'q') 
			{
				cout << "Thank You For Using. Good Bye.\n";
				cout << "\n======terminating...======\n";
			}

		} while (input != 'Q' && input != 'q');

		if (writing("courses.out.txt", courses, numClasses) == false)
		{
			cout << "The write file could not be created.\n";
			return 1;
		}

		return 0;
	}
