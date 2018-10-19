//---------------------------------------------------
// Purpose: Program to simulate bank deposits and withdrawals
// Author:  John Gauch
//---------------------------------------------------
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
   // Local variable declarations 
   int Command = 0;

	// Print command prompt
	cout << "Enter command number:\n"
	<< "   0 - quit\n"
	<< "   1 - deposit money\n"
	<< "   2 - withdraw money\n" 
	<< "   3 - print balance\n";

   // Read and handle banking command
   cin >> Command;
   switch (Command)
   {
   case 0:	// Quit code
      break;
   case 1:	// Deposit code
      break;
   case 2:	// Withdraw code
      break;
   case 3:	// Print code
      break;
   default:	// Handle other values
      break;
   }
}
