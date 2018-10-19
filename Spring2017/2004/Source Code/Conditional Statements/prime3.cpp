//---------------------------------------------------
// Purpose: Program to check for prime
//          numbers using a factoring approach
// Author:  John Gauch
//---------------------------------------------------
#include <cmath>
#include <iostream>
using namespace std;

int main() 
{
   // Local variable declarations
   int Number = 0;
   bool Prime = true;
   
   // Read input number
   cout << "Enter a number between [1..100]: ";
   cin >> Number;
   
   // Check input is valid
   if ((Number < 1) || (Number > 100))
      cout << "Error: Number is out of range\n";
   else
   {
      // Check if Number is prime
      if (Number == 1)
	 Prime = false;
      if ((Number > 2) && (Number % 2 == 0))
	 Prime = false;
      if ((Number > 3) && (Number % 3 == 0))
	 Prime = false;
      if ((Number > 5) && (Number % 5 == 0))
	 Prime = false;
      if ((Number > 7) && (Number % 7 == 0))
	 Prime = false;
      
      // Print output
      if (Prime)
	 cout << "Number " << Number << " IS prime\n";
      else
	 cout << "Number " << Number << " is NOT prime\n";
   }
   return 0;
}

