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
   float balance = 42.42;
   string command = " ";
   float amount = 0.0;

   // Print command prompt
   cout << "Enter command:\n"
      << "   q - quit\n"
      << "   d - deposit money\n"
      << "   w - withdraw money\n" 
      << "   p - print balance\n";   

   // Read user input
   cin >> command;

   // Handle deposit command 
   if (command == "d")
   {
      cout << "Enter deposit amount: ";
      cin >> amount;
      balance = balance + amount;
      cout << "Your new balance is: $" << balance << endl;
   }

   // Handle withdraw command 
   if (command == "w")
   {
      cout << "Enter withdraw amount: ";
      cin >> amount;
      balance = balance - amount;
      cout << "Your new balance is: $" << balance << endl;
   }

   // Handle print balance command 
   if (command == "p")
      cout << "Your balance is: $" << balance << endl;

   return 0;
}
