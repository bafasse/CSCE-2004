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
   if ( message.empty() )
      // Print default message, since user typed nothing
      cout << "Hello, World!" << endl;
   else   
      // Print the message that the user typed
      cout << message << endl;// Print an output message
   
   return 0 ;
}