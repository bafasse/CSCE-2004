// hw5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include<array>
#include <fstream>
using namespace std;

double gpa(int n, const char grades[], const int hours[]) {
double score[10];
double gpaScore = 0;
int totalHours = 0;
for (int x = 0; x < n; x++) {
if (grades[x] == 'A')
score[x] = 4.0;
else if (grades[x] == 'B')
score[x] = 3.0;
else if (grades[x] == 'C')
score[x] = 2.0;
else if (grades[x] == 'D')
score[x] = 1.0;
else if (grades[x] == 'F')
score[x] = 0.0;
if (grades[x] != 'W' && grades[x] != 'I') {
//cout << gpaScore << endl;
//cout << totalHours << endl;
gpaScore += score[x] * hours[x];
totalHours = totalHours + hours[x];
}
}
return gpaScore / totalHours;
}

/*void choiceA(double &GPA, double &gpaScore, double hours) {
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
*/
void choiceB(int &numClass, string courseName[10], string semester[10], string inputCourse[10], char grade[10], int arrayHours[10]) {
for (int x = 0; x < numClass; x++) {
cout << courseName[x] << endl;
cout << semester[x] << endl;
cout << inputCourse[x] << endl;
cout << grade[x] << endl;
cout << arrayHours[x] << endl;
cout << endl;
}
}

void choiceC(int &numClass, double score[10], int& total, int arrayHours[10]) {
for (int x = 0; x < numClass; x++)
if (score[x] == 1) {
total += arrayHours[x];
}
cout << endl;
cout << "The total number of hours with a grade D are " << total << endl;
cout << endl;
total = 0;
}

void choiceD(int &numClass, string &dSemester, string semester[10], int arrayHours[10], double score[10]) {
cout << endl;
cout << "Please Enter the Semester you would like to have the GPA calculated for\n";
cin.ignore();
getline(cin, dSemester);
int dHours = 0;
double dGPA = 0;
for (int x = 0; x < numClass; x++) {
if (semester[x] == dSemester) {
double dScore = 0;
dHours += arrayHours[x];
dScore += score[x];
dGPA += score[x] * arrayHours[x];
}
}

cout << "The GPA for " << dSemester << " is " << dGPA / dHours << endl;
cout << endl;
}

void choiceE(int &num, string courseName[10], string semester[10], string inputCourse[10], char grade[10], double score[10], int &inputHours, int arrayHours[10], double &gpaScore, int &hours, int &numClass) {
if (num >= 10) {
cout << "You have gone past the bounds of the array and can no longer add any classes\n";
cout << endl;
return;
}
cout << endl;
cout << "Please Enter The Name Of Class " << num + 1 << endl;
cin.ignore();
getline(cin, courseName[num]);

cout << "Please Enter The Semester You Took " << courseName[num] << " (i.e Fall 2016)\n";
getline(cin, semester[num]);

cout << "Please Enter The Course Number For " << courseName[num] << " (i.e CSCE 2004, MATH 2564, CSCE 2114)\n";
getline(cin, inputCourse[num]);

cout << "Please Enter The Letter Grade (A,B,C,D,F) For " << courseName[num] << endl;
cin >> grade[num];
cin.ignore();

while (grade[num] != 'A' && grade[num] != 'B' && grade[num] != 'C' && grade[num] != 'D' && grade[num] != 'F' || (grade[num] == 'W' && grade[num] == 'I')) {
cout << "There Seems To Have Been An Error. Please input a Letter Grade" << endl;
if (grade[num] == 'W')
cout << "What would be the point of adding a class if you got a W\n";
if (grade[num] == 'I')
cout << "What would be the point in adding a class if you got an I\n";
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
/*else if (grade[num] == 'W') {
num = num + 1;
continue;
}
else if (grade[num] == 'I') {
num = num + 1;
continue;
}*/

cout << "Please Enter The Number Of Hours For " << courseName[num] << endl;
cin >> inputHours;
cin.ignore();

while (inputHours <= 0) {
cout << "There Seems To Have Been An Error. Please Enter The Number Of Hours For " << courseName[num] << " (1-5)" << endl;
cin >> inputHours;
cin.ignore();
}
while (inputHours >= 6) {
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

void choiceF(string courseName[10], string inputCourse[10], int &num, string semester[10], int arrayHours[10], char grade[10]) {
int deleteCourse;
cout << "Enter the number of the class you would like to delete\n";
cin >> deleteCourse;

courseName[deleteCourse - 1] = courseName[num - 1];
inputCourse[deleteCourse - 1] = inputCourse[num - 1];
semester[deleteCourse - 1] = semester[num - 1];
arrayHours[deleteCourse - 1] = arrayHours[num - 1];
grade[deleteCourse - 1] = grade[num - 1];
num --;
}


void menuChoice(char &userInput) {
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
cin >> userInput;
}

bool reading(const char filename[], string name[], string time[], string number[], char grade[], int hours[], int& n, int capacity) {
ifstream din;
din.open(filename);

if (!din) 
return false;


if (capacity > 10) {
cout << "The capacity of the file is too big for the array. The size of the array is 10.\n";
return false;
}

din >> n;
din.get();
for (int x = 0; x < n; x++) {
//din.ignore();
getline(din, name[x]);
getline(din, time[x]);
getline(din, number[x]);
din >> grade[x];
din.get();
din >> hours[x];
din.get();
}
din.close();
return true;
}

bool writing(const char filename[], const string name[], const string time[], const string numbers[], const char grades[], const int hours[], int n) {
//This Works. DO NOT TOUCH!!
ofstream dout;
dout.open(filename);

if (!dout) {
cout << "The File was not able to be created\n";
return false;
}

dout << n << endl;
for (int x = 0; x < n; x++) 
{
dout << name[x] << endl;
dout << time[x] << endl;
dout << numbers[x] << endl;
dout << grades[x] << endl;
dout << hours[x] << endl;
}

dout.close();
return true;
}

void swapClass(int x, int y) {
int temp;
temp = x;
x = y;
y = temp;
}


int main()
{
string courseName[10];
string inputCourse[10];
string semester[10];
double score[10];
int arrayHours[10];
char grade[10];

int total = 0;
int inputClass = 0;
int hours = 0;
int numClass = 0;
int num = 0;
double GPA = 0;
double gpaScore = 0;
double accumulator = 0;

int inputHours;
string inputSemester;
string dSemester;
char userInput;
char yesNo;

cout << "Would you like to use the file provided\n";
cout << "Y/N\n";
cin >> yesNo;

while ((yesNo != 'Y' && yesNo != 'y') && (yesNo != 'N' && yesNo != 'n')) {
cout << "Please enter either Y for yes or N for No.\n";
cin >> yesNo;
}

string filename;
filename = "courses.txt";

if (yesNo == 'Y' || yesNo == 'y'){

if (filename != "courses.txt") {
cout << "The name of the file does not match. The name of the file should be courses.txt. Please fix this now and try again.\n";
}

if (reading(filename.c_str(), courseName, semester, inputCourse, grade, arrayHours, numClass, 10) == false) {
cout << "The file could not be found.\n";
cout << "\n======terminating...======\n";
return 0;
}
}


if (yesNo == 'N' || yesNo == 'n') {

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
cout << "Please Enter The Name Of Class " << num + 1 << endl;
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

}
else if (grade[num] == 'I') {
num = num + 1;

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
for (int x = 0; x < num; x++) {
if (grade[10] != 'W' && grade[10] != 'I') {
arrayHours[num] = inputHours;

gpaScore += score[num] * inputHours;
hours = hours + inputHours;
num = num + 1;
}
}
}

do {
menuChoice(userInput);

while (!(userInput == 'A' || userInput == 'a') && !(userInput == 'B' || userInput == 'b') && !(userInput == 'C' || userInput == 'c') && !(userInput == 'D' || userInput == 'd') && !(userInput == 'E' || userInput == 'e') && !(userInput == 'F' || userInput == 'f') && !(userInput == 'Q' || userInput == 'q')) {
cout << "Your input is invalid.\n";
cout << endl;
menuChoice(userInput);
}
if (userInput == 'A' || userInput == 'a') {
gpa(num, grade, arrayHours);
cout << gpa(numClass, grade, arrayHours) << endl;
}

if (userInput == 'B' || userInput == 'b') {
choiceB(numClass, courseName, semester, inputCourse, grade, arrayHours);

}

if (userInput == 'C' || userInput == 'c') {
choiceC(numClass, score, total, arrayHours);
}

if (userInput == 'D' || userInput == 'd') {
choiceD(numClass, dSemester, semester, arrayHours, score);
}

if (userInput == 'E' || userInput == 'e') {
choiceE(num, courseName, semester, inputCourse, grade, score, inputHours, arrayHours, gpaScore, hours, numClass);
}

if (userInput == 'F' || userInput == 'f')
choiceF(courseName, inputCourse, num, semester, arrayHours, grade);

if (userInput == 'Q' || userInput == 'q') {
cout << "Thank You For Using. Good Bye.\n";
cout << "\n======terminating...======\n";
}

} while (userInput != 'Q' && userInput != 'q');
if (writing("courses.out.txt", courseName, semester, inputCourse, grade, arrayHours, num) == false) {
cout << "The write file could not be created.\n";
return 0;
}
return 0;
}
