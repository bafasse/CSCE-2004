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
   
   // Print message loop
   while ( message.empty() != true ) {
       
      // Print the user message 
      cout << message << endl;
      
      // Get the value of message from the user again
      cout << "Type your greeting:" << endl;
      getline(cin, message);
   }
   
   return 0 ;
}