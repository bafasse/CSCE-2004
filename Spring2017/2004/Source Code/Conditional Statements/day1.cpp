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
   if (Day == 1)
      cout << "Sunday\n";

   else if (Day == 2)
      cout << "Monday\n";

   else if (Day == 3)
      cout << "Tuesday\n";

   else if (Day == 4)
      cout << "Wednesday\n";

   else if (Day == 5)
      cout << "Thursday\n";

   else if (Day == 6)
      cout << "Friday\n";

   else if (Day == 7)
      cout << "Saturday\n";

   else
      cout << "Error\n";
   return 0;
}
