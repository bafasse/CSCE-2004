//---------------------------------------------------
// Purpose: Program to demonstrate grade calculation
// Author:  John Gauch
//---------------------------------------------------
#include <cstdio>
#include <iostream>
using namespace std;

// Main body of program
int main()
{
   // Local variables
   int Hw1, Hw2, Hw3, Hw4, Hw5, Hw6, Hw7, Hw8;
   int Test1, Test2, Test3;
   float HwAverage, TestAverage, Average;
   char Grade;

   // Read inputs using iostream functions
   cout << "Enter 8 Hw grades [0..100]: ";
   cin >> Hw1 >> Hw2 >> Hw3 >> Hw4 >> Hw5 >> Hw6 >> Hw7 >> Hw8;
   cout << "Enter 3 Test scores [0..100]: ";
   cin >> Test1 >> Test2 >> Test3;

   // Calculate average assuming all grades are [0..100] 
   HwAverage = (Hw1 + Hw2 + Hw3 + Hw4 + Hw5 + Hw6 + Hw7 + Hw8) / 8;
   TestAverage = (Test1 + Test2 + Test3) / 3;
   Average = HwAverage * 0.4 + TestAverage * 0.6;

   // Calculate letter grade
   if (Average >= 90)
      Grade = 'A';
   else if (Average >= 80)
      Grade = 'B';
   else if (Average >= 70)
      Grade = 'C';
   else if (Average >= 60)
      Grade = 'D';
   else
      Grade = 'F';

   // Print results using iostream functions
   cout << "HwAverage = " << HwAverage << endl
      << "TestAverage = " << TestAverage << endl
      << "Average = " << Average << endl << "Grade = " << Grade << endl;
   return 0;
}
