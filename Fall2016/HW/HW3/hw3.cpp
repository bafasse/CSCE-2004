// hw3.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>
#include <string>
#include<array>
using namespace std;


int main()
{
double GPA;
int inputClass = 0;
double accumulator = 0;
string courseName[10];
string inputCourse[10];
int hours = 0;
char grade[10];
double score[10];
double gpaScore = 0;
int numClass = 0;
int num = 0;
int inputHours;
char userInput;
string inputSemester;
string semester[10];
int total = 0;
int arrayHours[10];
string dSemester;

cout << "Welcome to the GPA Calculator\n";
cout << "Please Enter How Many Classes You Are Taking\n";
cin >> inputClass;
cin.ignore();

numClass = inputClass;

while (inputClass <= 0 || inputClass > 10) {
cout << "Please Input A Positive Whole Number That Is Less Than 10\n";
cin >> inputClass;
cin.ignore();
}

while (num < inputClass) {
cout << "Please Enter The Name Of Class " << num+1 << endl;
getline(cin, courseName[num]);

cout << "Please Enter The Semester You Took " << courseName[num] << " (i.e Fall 2016)\n";
getline(cin, semester[num]);

cout << "Please Enter The Course Number For " << courseName[num] << " (i.e CSCE 2004, MATH 2564, CSCE 2114)\n";
getline(cin, inputCourse[num]);

cout << "Please Enter The Letter Grade (A,B,C,D,F,W,I) For " << courseName[num] << endl;
cin >> grade[num];
cin.ignore();

while (grade[num] != 'A' && grade[num] != 'B' && grade[num] != 'C' && grade[num] != 'D' && grade[num] != 'F' && grade[num] != 'W' && grade[num] != 'I') {
cout << "There Seems To Have Been An Error. Please input a Letter Grade" << endl;
cin >> grade[num];
cin.ignore();
}

if (grade[num] == 'A')
score[num] = 4.0;
else if (grade[num] == 'B')
score[num] = 3.0;
else if (grade[num] == 'C')
score[num] = 2.0;
else if (grade[num] == 'D')
score[num] = 1.0;
else if (grade[num] == 'F')
score[num] = 0.0;
else if (grade[num] == 'W') {
num = num + 1;
continue;
}
else if (grade[num] == 'I') {
num = num + 1;
continue;
}

cout << "Please Enter The Number Of Hours For " << courseName[num] << endl;
cin >> inputHours;
cin.ignore();

while (inputHours <= 0) {
cout << "There Seems To Have Been An Error. Please Enter The Number Of Hours For " << courseName[num] << " (1-5)" << endl;
cin >> inputHours;
}
while (inputHours >= 5) {
cout << "There Seems To Have Been An Error. Please Enter The Number Of Hours For Class " << num << " (1-5)" << endl;
cin >> inputHours;
}
arrayHours[num] = inputHours;

gpaScore += score[num] * inputHours;
hours = hours + inputHours;
num = num + 1;
}

do {
cout << "Welcome to the interactive menu-driven part of the GPA and Course storage program.\n";
cout << "Please enter the character next to the choice you wish to pick.\n";
cout << "Here are your options: \n";
cout << "A(a): Compute the GPA of all courses.\n";
cout << "B(b): List all courses.\n";
cout << "C(c): Compute the total credit hours of the courses with grade D.\n";
cout << "D(d): Compute the GPA for a particular semester.\n";
cout << "E(e): Add another course to the list.\n";
cout << "Q(q): Quit the Program.\n";
cout << endl;
cout << "Please choose from the following options\n";
cin >> userInput;

while (!(userInput == 'A' || userInput == 'a') && !(userInput == 'B' || userInput == 'b') && !(userInput == 'C' || userInput == 'c') && !(userInput == 'D' || userInput == 'd') && !(userInput == 'E' || userInput == 'e') && !(userInput == 'Q' || userInput == 'q')) {
cout << "Your input is invalid.\n";
cout << endl;
cout << "Welcome to the interactive menu-driven part of the GPA and Course storage program.\n";
cout << "Please enter the character next to the choice you wish to pick.\n";
cout << "Here are your options: \n";
cout << "A(a): Compute the GPA of all courses.\n";
cout << "B(b): List all courses.\n";
cout << "C(c): Compute the total credit hours of the courses with grade D.\n";
cout << "D(d): Compute the GPA for a particular semester.\n";
cout << "E(e): Add another course to the list.\n";
cout << "Q(q): Quit the Program.\n";
cout << endl;
cout << "Please choose from the following options\n";
cin >> userInput;
}
if (userInput == 'A' || userInput == 'a') {
GPA = gpaScore / hours;
cout << endl;
cout << "Your GPA is " << GPA << endl;

if (GPA >= 3.01)
cout << "You're doing a fantastic job\n";
else if (GPA == 3.0)
cout << "Keep up the good work\n";
else
cout << "Do a better job\n";
cout << endl;
}

if (userInput == 'B' || userInput == 'b') {
for (int x = 0; x < numClass; x++){
cout << courseName[x] << endl;
cout << semester[x] << endl;
cout << inputCourse[x] << endl;
cout << grade[x] << endl;
cout << arrayHours[x] << endl;
}

}

if (userInput == 'C' || userInput == 'c') {
for (int x = 0; x < numClass; x++) 
if (score[x] == 1) {
total += arrayHours[x];
}
cout << endl;
cout << "The total number of hours with a grade D are " << total << endl;
cout << endl;
total = 0;
}

if (userInput == 'D' || userInput == 'd') {
cout << endl;
cout << "Please Enter the Semester you would like to have the GPA calculated for\n";
cin.ignore();
getline(cin, dSemester);
int dHours = 0;
int dGPA = 0;
for (int x = 0; x < numClass; x++) {
if (semester[x] == dSemester) {
int dScore;
dHours += arrayHours[x];
dScore = score[x];
dGPA += score[x] * arrayHours[x];
}
}

cout << "The GPA for " << dSemester << " is " << dGPA / dHours << endl;
cout << endl;
}

if (userInput == 'E' || userInput == 'e') {
cout << endl;
cout << "Please Enter The Name Of Class " << num + 1 << endl;
cin.ignore();
getline(cin, courseName[num]);

cout << "Please Enter The Semester You Took " << courseName[num] << " (i.e Fall 2016)\n";
getline(cin, semester[num]);

cout << "Please Enter The Course Number For " << courseName[num] << " (i.e CSCE 2004, MATH 2564, CSCE 2114)\n";
getline(cin, inputCourse[num]);

cout << "Please Enter The Letter Grade (A,B,C,D,F,W,I) For " << courseName[num] << endl;
cin >> grade[num];
cin.ignore();

while (grade[num] != 'A' && grade[num] != 'B' && grade[num] != 'C' && grade[num] != 'D' && grade[num] != 'F' && grade[num] != 'W' && grade[num] != 'I') {
cout << "There Seems To Have Been An Error. Please input a Letter Grade" << endl;
cin >> grade[num];
cin.ignore();
}

if (grade[num] == 'A')
score[num] = 4.0;
else if (grade[num] == 'B')
score[num] = 3.0;
else if (grade[num] == 'C')
score[num] = 2.0;
else if (grade[num] == 'D')
score[num] = 1.0;
else if (grade[num] == 'F')
score[num] = 0.0;
else if (grade[num] == 'W') {
num = num + 1;
continue;
}
else if (grade[num] == 'I') {
num = num + 1;
continue;
}

cout << "Please Enter The Number Of Hours For " << courseName[num] << endl;
cin >> inputHours;
cin.ignore();

while (inputHours <= 0) {
cout << "There Seems To Have Been An Error. Please Enter The Number Of Hours For " << courseName[num] << " (1-5)" << endl;
cin >> inputHours;
cin.ignore();
}
while (inputHours >= 5) {
cout << "There Seems To Have Been An Error. Please Enter The Number Of Hours For Class " << num << " (1-5)" << endl;
cin >> inputHours;
cin.ignore();
}
arrayHours[num] = inputHours;

gpaScore += score[num] * inputHours;
hours = hours + inputHours;
num = num + 1;
numClass = numClass + 1;

}

if (userInput == 'Q' || userInput == 'q') {
cout << "Thank You For Using. Good Bye.\n";
cout << "\n======terminating...======\n";
}

} while (userInput != 'Q' && userInput != 'q');

return 0;
}
