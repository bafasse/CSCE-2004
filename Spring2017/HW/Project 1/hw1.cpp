// hw1.cpp : Defines the entry point for the console application.
//
//Visual Studio needs the #include line below for some reason
//#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	double a;
	double b;
	double c;
	
	//Input numbers for a,b,c
	cout << "Welcome to the Quadratic Formula Calculator.\n";
	cout << "Please input the number for the coefficient A: ";
	cin >> a;
	cout << "Please input the number for the coefficient B: ";
	cin >> b;
	cout << "Please input the number for the coefficient C: ";
	cin >> c;

	//Quadratic Formula
	double sqRoot = b * b - 4 * a * c;
	double PosQuad = (-b + sqrt(sqRoot)) / (2 * a);
	double NegQuad = (-b - sqrt(sqRoot)) / (2 * a);

	cout << endl << "The equation with your inputs is y(x) = " << a << "x^2 + "<< b << "x + " << c << endl;
	cout << "===========================================================\n";
	
	//Incorporate when the quadratic formula is divided by 0
	if (sqRoot < 0)
		cout << "You cannot take the square root of a negative number." << endl;
	else if (a == 0)
		cout << "You cannot divide by zero.\n";
	//Used else if to shpw that you are dividing by zero
	else
		cout << "The roots of this equation are " << PosQuad << " and " << NegQuad << endl;

	//Calculate X value in between roots
	double midpoint = (PosQuad + NegQuad) / 2;
	
	if (a == 0 || sqRoot < 0)
		cout << endl << "The roots could not be found so the midpoint could also not be found.\n";
	else
		cout << endl << "The midpoint between the two roots is: " << midpoint << endl;
	//Quadratic Formula Calculator
	double x;

	cout << "===========================================================\n";
	cout << endl << "Please input a value for x to be plugged into the equation: ";
	cin >> x;
	double quad = a * (x * x) + b * x + c;
	cout << "The value of y(" << x << ") is " << quad << endl;
	
	//Derivative 
	double y;

	cout << "===========================================================\n";
	cout << endl << "The derivative of the equation is y'(x) = " << 2 * a << "x + " << b << endl;
	cout << endl << "Please input a second value to be used for the derivative: ";
	cin >> y;
	double dx = (2 * a) * y + b;
	cout << "The value of y'(" << y << ") is " << dx << endl;
    return 0;
}


