//---------------------------------------------------
// Purpose: Program to convert test scores 
//          between 0..100 into letter grades
// Author:  John Gauch
//---------------------------------------------------
#include <cmath>
#include <iostream>
using namespace std;

int main() 
{
   // Local variable declarations
   float Score = 0;
   char Grade = ' ';
   
   // Read test score
   cout << "Enter test score: ";
   cin >> Score;
   
   // Calculate grade
   if (Score >= 90)
      Grade = 'A';
   else if (Score >= 80)
      Grade = 'B';
   else if (Score >= 70)
      Grade = 'C';
   else if (Score >= 60)
      Grade = 'D';
   else
      Grade = 'F';
   
   // Print output
   cout << "Your grade was " << Grade << endl;
   return 0;
}
