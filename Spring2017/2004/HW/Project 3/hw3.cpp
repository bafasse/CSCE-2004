// hw3.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	const int SMALLSIZE = 5;
	const int BIGSIZE = 25;
	int size;
	char ASCII;

	//Takes in SIZE's and ASCII character
	cout << "Input a number (5-25) indicating how big you want the shapes to be: ";
	cin >> size;
	cout << endl << "Input which character you want to be printed: ";
	cin >> ASCII;

	//Changes SIZE's if they are smaller than 5 or larger than 25
	if (size < SMALLSIZE)
		size = SMALLSIZE;
	else if (size > BIGSIZE)
		size = BIGSIZE;

	//Print Square
	cout << endl << "Square: " << endl;
	for (int row = 1; row <= size; row++)
	{
		//Prints rows
		for (int column = 1; column <= size; column++)
		{
			//Prints columns
			cout << " " << ASCII << " ";
		}
		cout << endl;
	}
	
	
	//Print Triangle
	cout << endl << "Triangle: " << endl;
	for (int row = 1; row <= size; row++)
	{
		for (int column = 1; column <= size; column++)
		{
			if (row >= column) {
				cout << " " << ASCII << " ";
			}
		}
		cout << endl;
	}

	//Vertical Stripes
	cout << endl << "Vertical Stripes: " << endl;
	for (int row = 1; row <= size; row++)
	{
		//Prints rows
		for (int column = 1; column <= size; column++)
		{
			if (column % 2 == 0)
				cout << " " << " ";
			else
				//Print if on odd numbered column
				cout << " " << ASCII << " ";
		}
		cout << endl;
	}

	//Hollowed out Square
	cout << endl << "Hollowed Out Square: " << endl;
	for (int row = 1; row <= size; row++)
	{
		for (int column = 1; column <= size; column++)
		{
			if (column == 1 || column == size || row == 1 || row == size)
				//Print character if on row edge
				cout << " " << ASCII << " ";
			else 
				cout << " " << " " << " ";
		}
		cout << endl;
	}

	//X-Shape
	cout << endl << "The X: " << endl;
	for (int row = 1; row <= size; row++)
	{
		for (int column = 1; column <= size; column++)
		{
			if (column == row || row + column == (size + 1))
				//Print character if on either line
				cout << " " << ASCII << " ";
			else
				//Print Space
				cout << " " << " " << " ";
		}
		cout << endl;
	}
    return 0;
}

 
