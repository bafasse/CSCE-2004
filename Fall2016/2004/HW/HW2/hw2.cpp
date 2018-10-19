// hw2.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
double GPA;
int inputClass = 0;
double accumulator = 0;
string message;
string inputCourse;
int hours = 0;
char grade;
double score;
double gpaScore = 0;
double x;
int num = 1;
int inputHours;


cout << "Welcome to the GPA Calculator\n";
cout << "Please Enter How Many Classes You Are Taking\n";
cin >> inputClass;

while (inputClass <= 0) {
cout << "Please Input A Positive Whole Number\n";
cin >> inputClass;
}

while (num <= inputClass) {
cout << "Please Enter The Name Of Class " << num << endl;;
getline(cin, message);
getline(cin, message);

cout << "Please Enter The Course Number For " << message << " (i.e CSCE 2004, MATH 2564, CSCE 2114)\n";
getline(cin, inputCourse);

cout << "Please Enter The Letter Grade (A,B,C,D,F,W,I) For " << message << endl;
cin >> grade;

while (grade != 'A' && grade != 'B' && grade != 'C' && grade != 'D' && grade != 'F' && grade != 'W' && grade != 'I') {
cout << "There Seems To Have Been An Error. Please input a Letter Grade" << endl;
cin >> grade;
}

if (grade == 'A')
score = 4.0;
else if (grade == 'B')
score = 3.0;
else if (grade == 'C')
score = 2.0;
else if (grade == 'D')
score = 1.0;
else if (grade == 'F')
score = 0.0;
else if (grade == 'W') {
num = num + 1;
continue;
}
else if (grade == 'I') {
num = num + 1;
continue;
}

cout << "Please Enter The Number Of Hours For " << message << endl;
cin >> inputHours;

while (inputHours <= 0) {
cout << "There Seems To Have Been An Error. Please Enter The Number Of Hours For " << message << " (1-5)" << endl;
cin >> inputHours;
}
while (inputHours >= 5) {
cout << "There Seems To Have Been An Error. Please Enter The Number Of Hours For Class " << num << " (1-5)" << endl;
cin >> inputHours;
}
gpaScore += score * inputHours;
hours = hours + inputHours;
num = num + 1;
}

GPA = gpaScore / hours;
cout << "Your GPA is " << GPA << endl;

 if (GPA >= 3.01)
                cout << "You're doing a fantastic job\n";
 else if (GPA == 3.0)
                cout << "Keep up the good work\n";
 else
                cout << "Do a better job\n";
  
  return 0;
}


