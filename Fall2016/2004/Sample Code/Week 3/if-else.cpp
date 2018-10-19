//---------------------------------------------------
// Purpose: practical examples of using if and if else statements
//
// Note: identation under if and else clause
//	      the use of relational (or comparison) operators
//
// Authors: Wing Ning Li
//---------------------------------------------------
// Include statements
#include <iostream>
using namespace std;

// Main function
int main ()
{
	cout << "\n\n==========================avoiding divide by zero=================================\n\n";
	// example 1
	double x;
	double y;
	cout << "Please type two floating point values for variable x and y\n";
	cin >> x >> y;	
	
	// divide y by x only if x is not zero: use if statement to achieve that
	if ( x != 0 )
		cout << "y/x = " << y/x << endl;
		
	cout << "\n\n==========================sorting x and y=================================\n\n";
	
	// example 2
	// print the value of x and y sorted in nondecreasing order: use if else statement
	if ( x < y )
		cout << x << ", " << y << endl;
	else
		cout << y << ", " << x << endl;
		
	cout << "\n\n==========================sorting x, y, z=================================\n\n";
		
	// example 3
	double z;
	cout << "Please type a floating point value for variable z\n";
	cin >> z;	
	
	// sort x, y and z: use nested if else statement for all possibilities
	// you may want to draw the flow chart for the code
	if ( x < y )
		if ( y < z )
			cout << x << ", " << y << ", " << z << endl;
		else // z <= y and need to compare z and x to decide the order
			if ( z < x )
				cout << z << ", " << x << ", " << y << endl;
			else
				cout << x << ", " << z << ", " << y << endl;
	else // y <= x case
		if ( z < y )
			cout << z << ", " << y << ", " << x << endl;
		else // y <= z and need to compare z and x to decide the order
			if ( z < x )
				cout << y << ", " << z << ", " << x << endl;
			else
				cout << y << ", " << x << ", " << z << endl;
		
	cout << "\n\n==========================converting to letter grade=================================\n\n";
			
	// example 4
	// output letter grade using standard scale
	// similar logic may be used to convert A to 4, B to 3, and so on for gpa calculation
	char grade;
	cout << "Please type your numberical score\n";
	cin >> x;
	if ( x >= 90 )
		grade = 'A';
	else if ( x >= 80 )
		grade = 'B';
	else if ( x >= 70 )
		grade = 'C';
	else if ( x >= 60 )
		grade = 'D';
	else if ( x >= 0 )
		grade = 'F';
	else {
		cout << "How did you manage to have a negative score?\n";
		cout << "We will create a new grade for that, which is N for negative.\n";
		grade = 'N';
	}
	
	cout << "Based on your input score of " << x << ", your letter grade is " << grade << endl;
	
	cout << "\n\n==========================getting menu choices=================================\n\n";
	
	// example 5
	// menu choice for interactive program
	char choice;
	cout << "Please type A for burger, B for sandwich, C for salad, and D for fasting for your order\n";
	cin >> choice;
	if ( choice == 'A' ){
		cout << "Making a burger for you...\n";
		cout << "Ready in 8 minutes\n";
	} else if ( choice == 'B' ) {
		cout << "Getting a sandwich for you...\n";
		cout << "Here it is\n";
	} else if ( choice == 'C' ) {
		cout << "Making a salad for you...\n";
		cout << "Ready in 2 minutes\n";
	} else if ( choice == 'D' ) {
		cout << "Good choice\n";
		cout << "I would like to have the experience of fasting for 24 hours or 48 hours\n";
	} else {
		cout << "What you typed: " << choice << " is not A or B or C or D\n";
		cout << "I cannot loop back to ask you type your choice again, since while loop has not been introduced.\n";
		cout << "Bye...\n";
	}
  

  return 0;
}
