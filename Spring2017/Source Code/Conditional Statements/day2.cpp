//---------------------------------------------------
// Purpose: Program to print out days of the week
// Author:  John Gauch
//---------------------------------------------------
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
   // Read day number
   int Day = 0;
   cout << "Enter day number: ";
   cin >> Day;

   // Print day of week
   switch (Day)
   {
   case 1:
      cout << "Sunday\n";
      break;
   case 2:
      cout << "Monday\n";
      break;
   case 3:
      cout << "Tuesday\n";
      break;
   case 4:
      cout << "Wednesday\n";
      break;
   case 5:
      cout << "Thursday\n";
      break;
   case 6:
      cout << "Friday\n";
      break;
   case 7:
      cout << "Saturday\n";
      break;
   default:
      cout << "Error\n";
   }
   return 0;
}
