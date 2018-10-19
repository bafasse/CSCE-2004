//---------------------------------------------------
// Purpose: practical examples of using while loop statement
//
// Note: identation under while loop
//	      certain relationship among some variables within the loop remains the same
//       nested while loop
//
// Authors: Wing Ning Li
//---------------------------------------------------
// Include statements
#include <iostream>
using namespace std;

// Main function
int main ()
{
	cout << "\n\n===ask the user to \"enter\" course information for 10 courses====\n\n";
		
	// example 1
	// ask the user to "enter" course information for 10 courses
	int count = 1;
	while ( count <= 10 ){
		cout << "Enter the information for course " << count << endl << endl;
		count = count + 1;
	}
	
	cout << "\n\n============find the sum of 1,2,3...20======================\n\n";
	
	// example 2
	// find the sum of 1,2,3...20
	// even though there is a equation for that, which is more efficient, we will not use it
	int sum = 0;
	count = 1;
	while ( count <= 20 ){
		sum = sum + count;
		count = count + 1;
	}
	cout << "The sum of 1+2+...+20 is " << sum << endl << endl;
	
	cout << "\n\n====decide if the given integer is a prime number or not===\n\n";
	
	// example 3
	// decide if the given integer is a prime number or not
	// Definition of prime number: 
	// A Prime Number can be divided evenly only by 1, or itself. 
	// And it must be a whole number greater than 1
	cout << "Please input a whole number greater that 1\n";
	cout << "And I will tell you if it is a prime number, because I am intelligent.\n";
	cin >> sum;
	bool found = false;
	if ( sum > 1) {
		count = 2;
		// there are two ways to leave the while loop
		while ( !found && count*count <= sum ){
			if ( sum % count == 0 )
				// found the first or smallest divisor
				found = true;
			else
				// try the next value as divisor
				count = count + 1;
		} 
		if (found)
			cout << sum << " is not a prime number, because it has a divisor " << count << endl;
		else
			cout << sum << " is a prime number, because it does not have any divisor greater than 1 and less than " << count << endl;
		
	} else
		cout << "Your input is " << sum << " which is not greater that 1. Therefore it is not a prime\n";
	
	cout << "\n\n===Listing all the prime numbers less than 1000 : nested loop===\n\n";
	
	
	// example 4
	// Listing all the prime numbers less than 1000 : nested loop
	// The first loop enumerate each number 2,3,4... 1000
	// The second loop check to see (use the solution in example 3) if the number is a prime
	cout << "Prime number listing in increasing order:\n";
	int number = 2;
	int total = 0;
	while (number <= 1000) {
		found = false;
		count = 2;
		while ( !found && count*count <= number ){
			if ( number % count == 0 )
				// found the first or smallest divisor
				found = true;
			else
				// try the next value as divisor
				count = count + 1;
		} 
		if (!found){
			cout << number << " ";
			total = total + 1;
		}
		
		number = number + 1;	
	}
	cout << "\nThe total number of prime numbers listed is " << total << ", which is about " << (double) total/1000*100 << "%.\n\n";
	
	cout << "\n\n==The sum of the first k terms of the following sequence 1,1,2,3,5,8,13,21,34,55,89,144,...==\n\n";
	
	// example 5
	// The sum of the first k terms of the following sequence 1,1,2,3,5,8,13,21,34,55,89,144,...
	cout << "Please consider the following sequence 1,1,2,3,5,8,13,21,34,55,89,144,...\n";
	cout << "Do you observe any pattern among these values? Using the pattern tell me what is the next term after 144\n";
	cout << "I am intelligent. I can sum up the first k terms in the sequence.\n";
	cout << "By taking the difference between the sum of the first 13 terms and that of first 12 terms, you may also figure the number after 144, right?\n";
	cout << "So please type the value for k:\n";
	cin >> number;
	
	int pre_term = 0;
	int term = 1;
	sum = 0;	
	count = 0;
	while ( count < number ){
   	sum = sum + term;
   	count = count + 1;
		term = pre_term + term;
		pre_term = term - pre_term;
	}
	cout << "sum = " << sum << endl;
	
	cout << "\n\n==Input validation example==\n\n";
	
	// example 6
	// The character input from the user must be A, B, C, D, and F.
	char grade;
	cout << "Please type one of the following grade: A, B, C, D, F \n";
	cin >> grade;
	
	while ( grade != 'A' && grade != 'B' && grade != 'C' && grade != 'D' && grade != 'F' ){
		cout << grade << " you keyed in is not one of A, B, C, D, F\n";
		cout << "Please type one of the following grade: A, B, C, D, F\n";
		cin >> grade;   	
	}
	cout << "What you entered is " << grade << endl;

  return 0;
}

