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
#include <iomanip>
using namespace std;

// Global constants
const int ROWS = 26;
const int COLS = 26;

// ADD FUNCTIONS HERE
void storeValue(float data[ROWS][COLS], int r1, int c1, int r2, int c2, float val) {
	
	
	for (int i = r1; i <= r2; i++) {
		for (int j = c1; j <= c2; j++) {
			data[i][j] = val;
		}
	}

	
}

void storeRandValue(float data[ROWS][COLS], int r1, int c1, int r2, int c2, int val1, int val2) {
	
	for (int i = r1; i <= r2; i++) {
		for (int j = c1; j <= c2; j++) {
			data[i][j] = val1 +  rand() % (val2 + val1 + 1);
		}
	}

}

float minValues(float data[ROWS][COLS], int r1, int c1, int r2, int c2){
	float min = data[r1][c1];

	for (int i = r1; i <= r2; i++) {
		for (int j = c1; j <= c2; j++) {
			if (min > data[i][j])
				min = data[i][j];
		}
	}
	return min;
}

float maxValues(float data[ROWS][COLS], int r1, int c1, int r2, int c2) {

	float max = data[r1][c1];
	for (int i = r1; i <= r2; i++) {
		for (int j = c1; j <= c2; j++) {
			if (max < data[i][j])
				max = data[i][j];
		}
	}
	return max;
}

float sumValues(float data[ROWS][COLS], int r1, int c1, int r2, int c2) {
	
	int sum = 0;
	for (int i = r1; i <= r2; i++) {
		for (int j = c1; j <= c2; j++) {
			sum += data[i][j];
		}
	}
	//print average
	return sum;

}

float multiplyValue(float data[ROWS][COLS], int r1, int c1, int r2, int c2) {
	
	int total = 1;
	for (int i = r1; i <= r2; i++) {
		for (int j = c1; j <= c2; j++) {
			total *= data[i][j];
		}
	}
	return total;
}

float avgValue(float data[ROWS][COLS], int r1, int c1, int r2, int c2) {

	int count = 0;
	int total = 0;
	for (int i = r1; i <= r2; i++) {
		for (int j = c1; j <= c2; j++) {
			total += data[i][j];
			count++;
		}
	}

	return total / count;
}

float stdDev(float data[ROWS][COLS], int r1, int c1, int r2, int c2)
{
	float mean = avgValue(data, r1, c1, r2, c2);
	float sum = 0;
	int counter = 0;

	for (int r = r1; r <= r2; ++r)
	{
		for (int c = c1; c <= c2; ++c)
		{
			float delta = data[r][c] - mean;
			sum += delta * delta;
			++counter;
		}
	}

	return sqrt(sum / counter);
}

void printValue(float data[ROWS][COLS], int r1, int c1, int r2, int c2) 
{
	cout << "   ";
	// Output the columns [R - T]. Convert c1,c2 to a letter
	for (int i = c1; i <= c2; ++i)
		cout << setw(3) << char(i + 'A') << "  ";
	cout << endl;

	cout << showpoint << fixed << setprecision(2);

	for (int i = r1; i <= r2; i++) 
	{
		// Output the row number [5 - 10]. Convert r1,r2 to a number
		cout << setw(3) << (i + 1) << ": ";

		for (int j = c1; j <= c2; j++) 
		{
			cout << setw(4) << data[i][j] << " ";
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
	float data[ROWS][COLS] = { 0 };

	for (int r = 0; r < ROWS; r++) {
		for (int c = 0; c < COLS; c++) {
			data[r][c] = 0;
		}
	}

	// Loop processing menu commands
	int command = get_menu_choice();
	while (command != 0)
	{
		// Ask the user for the window
		string col1, row1, col2, row2;
		cout << "Please enter a the letter of the Column followed by the number of the Row for the starting point: ";
		cin >> col1 >> row1;
		cout << "Please enter a the letter of the Column followed by the number of the Row for the ending point: ";
		cin >> col2 >> row2;

		//convert A..Z to 0..25
		int c1, r1, c2, r2;
		c1 = toupper(col1[0]) - 'A';
		c2 = toupper(col2[0]) - 'A';

		//convert 1..26 to 0..25
		r1 = stoi(row1) - 1;
		r2 = stoi(row2) - 1;

		// ADD CODE HERE
		if (command == 1)
		{
			int val;
			cout << "Please enter a value: ";
			cin >> val;
			storeValue(data, r1, c1, r2, c2, val);
		}
		else if (command == 2) {
			int val1, val2;
			cout << "Please enter the range of the random values;. (MIN MAX): ";
			cin >> val1 >> val2;
			storeRandValue(data, r1, c1, r2, c2, val1, val2);
		}
		else if (command == 3)
			cout << "The minimum value is: " << minValues(data, r1, c1, r2, c2) << endl;
		else if (command == 4)
			cout << "The maximum value is: " << maxValues(data, r1, c1, r2, c2) << endl;
		else if (command == 5)
			cout << "The sum of the values is: " << sumValues(data, r1, c1, r2, c2) << endl;
		else if (command == 6)
			cout << "Multiples: " << multiplyValue(data, r1, c1, r2, c2) << endl;
		else if (command == 7)
			cout << "Average: " << avgValue(data, r1, c1, r2, c2) << endl;
		else if (command == 8)
			cout << "Standard Deviation: " << stdDev(data, r1, c1, r2, c2) << endl;
		else if (command == 9)
			printValue(data, r1, c1, r2, c2);


		// Get next command
		command = get_menu_choice();
	}
	return 0;
}
