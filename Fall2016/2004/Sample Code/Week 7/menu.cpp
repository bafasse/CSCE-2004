// Include statements
#include <iostream>
using namespace std;

// an example of menu system for terminal base user interface

int main()
{
   const string menu = "\nWellcome to our menu system1"
                       "\nEnter A, B, or C"
                       "\nA: for action one"
                       "\nB: for action two"
                       "\nC: for done\n";

   char choice; 
   
   // display menu on screen
   cout << menu;
   // read user menu selection
   cout << "Please enter A or B or C:";
   cin >> choice;
   // processing
   while ( choice != 'C') {
      // figuring menu selection
      if ( choice == 'A') {
         cout << "\n===action one is selected===\n";
      } else if (choice == 'B'){
         cout << "\n===action two is selected===\n";
      } else {
         cout << "\n***you did not follow the menu instruction and entered: " << choice << " ***\n";
      }
      // this part is identical to the part before the while loop
      cout << menu;
      cout << "Please enter A or B or C:";
      cin >> choice;
   
   }
   cout << "\n===terminating...===\n";
   
   return 0 ;
}
