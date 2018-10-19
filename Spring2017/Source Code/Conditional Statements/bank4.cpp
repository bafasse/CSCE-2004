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
   int Money = 0;
   int Balance = 100;

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
      cout << "See you later!" << endl;
      break;

   case 1:	// Deposit code
      cout << "Enter deposit amount: ";
      cin >> Money;
      Balance = Balance + Money;
      break;

   case 2:	// Withdraw code
      cout << "Enter withdraw amount: ";
      cin >> Money;
      Balance = Balance - Money;
      break;

   case 3:	// Print code
      cout << "Current balance = " << Balance << endl;
      break;

   default:	// Handle other values
      cout << "Ooops try again" << endl;
      break;
   }

   // Print final balance
   cout << "Final balance = " << Balance << endl;
}
