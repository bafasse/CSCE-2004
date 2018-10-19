// Include statements
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

// defining functions examples
// even function that determine if an integer is even 
bool even(int n){
	return n%2 == 0; // use expression instead of if else statement as in the lecture slide
}

// a function that does not return, but still useful for showing a int type variable and its value
void show_int(string var, int value){
	cout << endl;
	cout << var << "=" << value << endl;
}

// a function that does not return, but still useful for showing a int type variable and its value
void show_string(string var, string value){
	cout << endl;
	cout << var << "=" << value << endl;
}


// Main function
int main()
{
	
	int m;
	cout << "Enter an integer:\n";
	cin >> m;
	if ( even(m) )
		cout << m << " is even." << endl;
	else
		cout << m << " is odd." << endl;
		
	show_int("m",m);
	
	// Initialize and declare variables for using user defined function
	char greeting[20] = "Hello, World!!";
	char str[20] ={'H','i','\0'};
	char temp[40];
	
	string msg = "Wecome everyone!";
	
	show_string("msg", msg);
	show_string("greeting",greeting);
	show_string("str",str);
	
	// new values of greeting
	show_string("greeting", strcat(greeting, str));
	
	// danger since temp is not initialized, the program could crash. Do you know why?
	show_string("temp", temp);
	
	// new values for temp
	show_string("temp", strcpy(temp, str));   
   

   return 0 ;
}
