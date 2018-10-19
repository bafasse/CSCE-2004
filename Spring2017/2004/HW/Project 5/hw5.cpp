// hw5.cpp : Defines the entry point for the console application.
//

//---------------------------------------------------
// Purpose: Implement menu-based spreadsheet program.
// Author:  TO BE ADDED
//---------------------------------------------------

//#include "stdafx.h"
#include <cmath>
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;

// Global constants
const int ROWS = 26;
const int COLS = 26;

// ADD FUNCTIONS HERE
void storeValue(float data[ROWS][COLS]) {
	string col1, row1, col2, row2;
	float val;
	cout << "Please enter a value: ";
	cin >> val;
	cout << "Please enter a the letter of the Column followed by the number of the Row for the starting point: ";
	cin >> col1 >> row1;
	cout << "Please enter a the letter of the Column followed by the number of the Row for the ending point: ";
	cin >> col2 >> row2;

	//convert A..Z to 0..25
	int c1, r1, c2, r2;
	c1 = col1[0] - 'A';
	c2 = col2[0] - 'A';

	//convert 1..26 to 0..25
	r1 = stoi(row1) - 1;
	r2 = stoi(row2) - 1;

	for (int i = r1; i <= r2; i++) {
		for (int j = c1; j <= c2; j++) {
			data[i][j] = val;
		}
	}

	
}

void storeRandValue(float data[ROWS][COLS]) {
	
	string col1, row1, col2, row2;
	int val;
	cout << "Please enter a value: ";
	cin >> val;
	cout << "Please enter a the letter of the Column followed by the number of the Row for the starting point: ";
	cin >> col1 >> row1;
	cout << "Please enter a the letter of the Column followed by the number of the Row for the ending point: ";
	cin >> col2 >> row2;

	//convert A..Z to 0..25
	int c1, r1, c2, r2;
	c1 = col1[0] - 'A';
	c2 = col2[0] - 'A';

	//convert 1..26 to 0..25
	r1 = stoi(row1) - 1;
	r2 = stoi(row2) - 1;

	for (int i = r1; i <= r2; i++) {
		for (int j = c1; j <= c2; j++) {
			data[i][j] = rand() % val;
		}
	}

}

void minValues(float data[ROWS][COLS]){
	string col1, row1, col2, row2;
	cout << "Please enter a the letter of the Column followed by the number of the Row for the starting point: ";
	cin >> col1 >> row1;
	cout << "Please enter a the letter of the Column followed by the number of the Row for the ending point: ";
	cin >> col2 >> row2;

	//convert A..Z to 0..25
	int c1, r1, c2, r2;
	c1 = col1[0] - 'A';
	c2 = col2[0] - 'A';

	//convert 1..26 to 0..25
	r1 = stoi(row1) - 1;
	r2 = stoi(row2) - 1;

	for (int i = r1; i <= r2; i++) {
		for (int j = c1; j <= c2; j++) {
			data[i][j] = data[i][j];
		}
	}
	
}

void maxValues(float data[ROWS][COLS]) {
	string col1, row1, col2, row2;
	cout << "Please enter a the letter of the Column followed by the number of the Row for the starting point: ";
	cin >> col1 >> row1;
	cout << "Please enter a the letter of the Column followed by the number of the Row for the ending point: ";
	cin >> col2 >> row2;

	//convert A..Z to 0..25
	int c1, r1, c2, r2;
	c1 = col1[0] - 'A';
	c2 = col2[0] - 'A';

	//convert 1..26 to 0..25
	r1 = stoi(row1) - 1;
	r2 = stoi(row2) - 1;

	for (int i = r1; i <= r2; i++) {
		for (int j = c1; j <= c2; j++) {
			data[i][j] = data[i][j];
		}
	}
	

}

void sumValues(float data[ROWS][COLS]) {
	string col1, row1, col2, row2;
	cout << "Please enter a the letter of the Column followed by the number of the Row for the starting point: ";
	cin >> col1 >> row1;
	cout << "Please enter a the letter of the Column followed by the number of the Row for the ending point: ";
	cin >> col2 >> row2;

	//convert A..Z to 0..25
	int c1, r1, c2, r2;
	c1 = col1[0] - 'A';
	c2 = col2[0] - 'A';

	//convert 1..26 to 0..25
	r1 = stoi(row1) - 1;
	r2 = stoi(row2) - 1;
	
	int total = 0;
	for (int i = r1; i <= r2; i++) {
		for (int j = c1; j <= c2; j++) {
			total += data[i][j];
		}
	}
	//print average
	cout << endl << "Sum = " << total << endl;

}

void multiplyValue(float data[ROWS][COLS]) {
	string col1, row1, col2, row2;
	cout << "Please enter a the letter of the Column followed by the number of the Row for the starting point: ";
	cin >> col1 >> row1;
	cout << "Please enter a the letter of the Column followed by the number of the Row for the ending point: ";
	cin >> col2 >> row2;

	//convert A..Z to 0..25
	int c1, r1, c2, r2;
	c1 = col1[0] - 'A';
	c2 = col2[0] - 'A';

	//convert 1..26 to 0..25
	r1 = stoi(row1) - 1;
	r2 = stoi(row2) - 1;

	int total = 1;
	for (int i = r1; i <= r2; i++) {
		for (int j = c1; j <= c2; j++) {
			total *= data[i][j];
		}
	}
	cout << endl << "Multiples = " << total << endl;
}

void avgValue(float data[ROWS][COLS]) {
	string col1, row1, col2, row2;
	cout << "Please enter a the letter of the Column followed by the number of the Row for the starting point: ";
	cin >> col1 >> row1;
	cout << "Please enter a the letter of the Column followed by the number of the Row for the ending point: ";
	cin >> col2 >> row2;

	//convert A..Z to 0..25
	int c1, r1, c2, r2;
	c1 = col1[0] - 'A';
	c2 = col2[0] - 'A';

	//convert 1..26 to 0..25
	r1 = stoi(row1) - 1;
	r2 = stoi(row2) - 1;

	int count = 0;
	int total = 0;
	for (int i = r1; i <= r2; i++) {
		for (int j = c1; j <= c2; j++) {
			cout << data[i][j] << " ";
			total = total + data[i][j];
			count++;
		}
	}
	//print average
	cout << endl << "Total = " << total << endl;
	cout << "Count = " << count << endl;
	cout << "Average = " << total / count << endl;
}

void stdDev(float data[ROWS][COLS]) {
	string col1, row1, col2, row2;
	cout << "Please enter a the letter of the Column followed by the number of the Row for the starting point: ";
	cin >> col1 >> row1;
	cout << "Please enter a the letter of the Column followed by the number of the Row for the ending point: ";
	cin >> col2 >> row2;

	//convert A..Z to 0..25
	int c1, r1, c2, r2;
	c1 = col1[0] - 'A';
	c2 = col2[0] - 'A';

	//convert 1..26 to 0..25
	r1 = stoi(row1) - 1;
	r2 = stoi(row2) - 1;

	int count = 0;
	int total = 0;
	for (int i = r1; i <= r2; i++) {
		for (int j = c1; j <= c2; j++) {
			cout << data[i][j] << " ";
			total = total + data[i][j];
			count++;
		}
	}
	//print average
	cout << endl << "Total = " << total << endl;
	cout << "Count = " << count << endl;
	cout << "Average = " << total / count << endl;
}

void printValue(float data[ROWS][COLS]) {
	string col1, row1, col2, row2;
	cout << "Please enter a the letter of the Column followed by the number of the Row for the starting point: ";
	cin >> col1 >> row1;
	cout << "Please enter a the letter of the Column followed by the number of the Row for the ending point: ";
	cin >> col2 >> row2;
	
	//convert A..Z to 0..25
	int c1, r1, c2, r2;
	c1 = col1[0] - 'A';
	c2 = col2[0] - 'A';

	//convert 1..26 to 0..25
	r1 = stoi(row1) - 1;
	r2 = stoi(row2) - 1;

	int count = 0;
	int total = 0;
	for (int i = r1; i <= r2; i++) {
		for (int j = c1; j <= c2; j++) {
			cout << data[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}



//---------------------------------------------------
// Print command menu to user and get input
//---------------------------------------------------
int get_menu_choice()
{
	// Print command menu
	cout << "Welcome to MiniCalc\n"
		<< "   1) Store specified data value\n"
		<< "   2) Store random data values\n"
		<< "   3) Calculate minimum of data values\n"
		<< "   4) Calculate maximum of data values\n"
		<< "   5) Calculate sum of data values\n"
		<< "   6) Calculate product of data values\n"
		<< "   7) Calculate average of data values\n"
		<< "   8) Calculate standard deviation of data values\n"
		<< "   9) Print data values\n"
		<< "   0) Quit the program\n"
		<< "Enter command: ";

	// Get user input
	int command;
	cin >> command;
	if (command >= 0 && command <= 9)
		return command;
	else
		return get_menu_choice();
}

//---------------------------------------------------
// Main program
//---------------------------------------------------
int main()
{
	// Declare spreadsheet
	float data[ROWS][COLS];

	// Loop processing menu commands
	int command = get_menu_choice();
	while (command != 0)
	{
		// ADD CODE HERE
		if (command == 1)
			storeValue(data);
		if (command == 2)
			storeRandValue(data);
		if (command == 3)
			minValues(data);
		if (command == 4)
			maxValues(data);
		if (command == 5)
			sumValues(data);
		if (command == 6)
			multiplyValue(data);
		if (command == 7)
			avgValue(data);
		if (command == 8)
			stdDev(data);
		if (command == 9)
			printValue(data);


		// Get next command
		command = get_menu_choice();
	}
	return 0;
}