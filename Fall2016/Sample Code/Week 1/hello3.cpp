// Include statements
#include <iostream>
#include <string>
using namespace std;

// Main function or program
int main()
{
   // Initialize variables
   string message;

   // Get the value of message from the user
   cout << "Type your greeting:" << endl;
   getline(cin, message);
   
   // Print an output message
   cout << message << endl;
   
   return 0 ;
}