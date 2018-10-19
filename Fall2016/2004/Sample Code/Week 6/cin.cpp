// using some of the manipulator of cout

#include <iostream>

#include <iomanip>

using namespace std;


int main()
{

   
   int number;

   string message;

   char grade;

   int hours;


   cout << "Enter a whole number:" << endl;

   cin >> number;


   cout << "Enter a message:" << endl;

   getline(cin, message);

   getline(cin, message);


   cout << "Enter a character for grade:" << endl;

   cin >> grade;


   cout << "Enter a whole number for credit hour:" << endl;

   cin >> hours;

   
   cout << "You input check: \n" << " number = " << number  << " message = " << message  << " grade = " << grade   << " hours = " << hours << endl;

   
   cout << "Enter a whole number:" << endl;

   cin >> number;


   if (cin.fail())

   	cout << "You did not enter a whole number!\n";

   else

   	cout << "You entered " << number << endl;

   
  
 return 0 ;

}
