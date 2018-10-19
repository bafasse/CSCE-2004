// Include statements
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

// using functions examples


// Main function
int main()
{
	// Initialize and declare variables for using cstring function
	char greeting[20] = "Hello, World!!";
	char str[20] ={'H','i','\0'};
	char temp[40];
	
	cout << greeting << "=" << strlen(greeting) << " characters\n";
	strcpy (temp, str);  // return value not used
	cout << temp << endl;
	
	// using the return value
	cout << strcat(temp, greeting) << endl;
	cout << "The value of temp is:" << temp << endl;
	
   // declare variables for using some math functions
   double x, y, z;

   x=2;
   y=sqrt(x);
   z=pow(2,0.5);
   cout << "x=" << x << " y=" << y << " z=" << z << " x-y*y=" << x-y*y << endl;
   
   y=cbrt(x);
   z=pow(2,1.0/3);
   cout << "x=" << x << " y=" << y << " z=" << z << " x-y*y*y=" << x-y*y*y << endl;
   

   return 0 ;
}
