// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double GPA;
	int hours1;
	int hours2;
	int hours3;
	int hours4;
	int hours5;
	char grade1;
	char grade2;
	char grade3;
	char grade4;
	char grade5;
	double score1;
	double score2;
	double score3;
	double score4;
	double score5;

	cout << "Enter number of hours for your first class(1-5)\n";
	cin >> hours1;
	cout << "Enter letter grade for your first class\n";
	cin >> grade1;

	if (grade1 == 'A')
		score1 = 4.0;
	else if (grade1 == 'B')
		score1 = 3.0;
	else if (grade1 == 'C')
		score1 = 2.0;
	else if (grade1 == 'D')
		score1 = 1.0;
	else if (grade1 == 'F')
		score1 = 0.0;


	cout << "Enter number of hours for your second class(1-5)\n";
	cin >> hours2;
	cout << "Enter letter grade for your second class\n";
	cin >> grade2;

	if (grade2 == 'A')
		score2 = 4.0;
	else if (grade2 == 'B')
		score2 = 3.0;
	else if (grade2 == 'C')
		score2 = 2.0;
	else if (grade2 == 'D')
		score2 = 1.0;
	else if (grade2 == 'F')
		score2 = 0.0;

	cout << "Enter number of hours for your third class(1-5)\n";
	cin >> hours3;
	cout << "Enter letter grade for your third class\n";
	cin >> grade3;

	if (grade3 == 'A')
		score3 = 4.0;
	else if (grade3 == 'B')
		score3 = 3.0;
	else if (grade3 == 'C')
		score3 = 2.0;
	else if (grade3 == 'D')
		score3 = 1.0;
	else if (grade3 == 'F')
		score3 = 0.0;

	cout << "Enter number of hours for your fourth class(1-5)\n";
	cin >> hours4;
	cout << "Enter letter grade for your fourth class\n";
	cin >> grade4;

	if (grade4 == 'A')
		score4 = 4.0;
	else if (grade4 == 'B')
		score4 = 3.0;
	else if (grade4 == 'C')
		score4 = 2.0;
	else if (grade4 == 'D')
		score4 = 1.0;
	else if (grade4 == 'F')
		score4 = 0.0;

	cout << "Enter number of hours for your fifth class(1-5)\n";
	cin >> hours5;
	cout << "Enter letter grade for your fifth class\n";
	cin >> grade5;

	if (grade5 == 'A')
		score5 = 4.0;
	else if (grade5 == 'B')
		score5 = 3.0;
	else if (grade5 == 'C')
		score5 = 2.0;
	else if (grade5 == 'D')
		score5 = 1.0;
	else if (grade5 == 'F')
		score5 = 0.0;

	GPA = (double) ((hours1 * score1) + (hours2 * score2) + (hours3 * score3) + (hours4 * score4) + (hours5 * score5)) / (hours1 + hours2 + hours3 + hours4 + hours5);

	cout << "Your GPA is " << GPA << endl;

	if (GPA >= 3.01)
		cout << "You're doing a fantastic job\n";
	else if (GPA == 3.0)
		cout << "Keep up the good work\n";
	else
		cout << "Do a better job\n";

    return 0;
}


