// hw2.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
	char userinput;
	double menu_price;
	string menu;

//Ask user what they want 
	cout << "Hello and welcome to the food program.\n";
	cout << "Would you like to order from the breakfast, lunch, or dinner menu?\n";
	cout << "Please input B, L, or D: ";
	cin >> userinput;

//Read input
	while (!(userinput == 'B' || userinput == 'L' || userinput == 'D' || userinput == 'b' || userinput == 'l' || userinput == 'd')) {
		cout << endl << "Your input could not be registered. Please try again.\n";
		cout << "Please input B, L, or D: ";
		cin >> userinput;
	}
	if (userinput == 'B' || userinput == 'b') {
		cout << "Here is our breakfast menu: \n";
		cout << "Eggs\n";
		cout << "Bacon\n";
		cout << "Toast or Pancakes\n";
		cout << "Sausage\n";
		cout << "Orange Juice or Coffee\n";
		cout << endl << "The price of this menu is $6.99.\n";
		menu_price = 6.99;
		menu = "breakfast menu";
	}
	else if (userinput == 'L' || userinput == 'l') {
		cout << "Here is out lunch menu: \n";
		cout << "Cheeseburger\n";
		cout << "Pizza\n";
		cout << "Tacos\n";
		cout << "Hot Sub\n";
		cout << "Dr. Pepper\n";
		cout << endl << "The price of this menu is $8.99.\n";
		menu = "lunch menu";
		menu_price = 8.99;
	}
	else if (userinput == 'D' || userinput == 'd') {
		cout << "This is our dinner menu: \n";
		cout << "Steak\n";
		cout << "Baked or Mashed Potatoes\n";
		cout << "Ribs\n";
		cout << "Shrimp\n";
		cout << "Dr. Pepper\n";
		cout << endl << "The price of this menu is $9.99.\n";
		menu = "dinner menu";
		menu_price = 9.99;
	}
//Ask how many of that order they want 
	
	int quantity;

	cout << "How many orders of the " << menu << " would you like: ";
	cin >> quantity;
	cout << endl;

//Confirm/Deny Order
	char confirmation;
	double price = menu_price * (quantity + 0.05);

	cout << "Are you sure this is what you want (Y/N): ";
	cin >> confirmation;

	while (!(confirmation == 'Y' || confirmation == 'y' || confirmation == 'N' || confirmation == 'n')) {
		cout << "Your input is not valid. Please Try Again.\n";
		cout << endl << "Are you sure this is what you want (Y/N): ";
		cin >> confirmation;
	}

	if (confirmation == 'Y' || confirmation == 'y') 
		cout << "Thank You for using the food program to process your order." << endl << "Your total is $" << fixed << setprecision(2) << price << endl;
	else if (confirmation == 'N' || confirmation == 'n')
		cout << "Please Try again.\n";

    return 0;
}


