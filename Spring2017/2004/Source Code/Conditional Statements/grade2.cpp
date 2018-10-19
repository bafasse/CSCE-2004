//---------------------------------------------------
// Purpose: Program to test nested if-else statements
// Author:  John Gauch
//---------------------------------------------------
#include <cmath>
#include <iostream>
using namespace std;

int main() 
{
   // Read test score
   float Score = 0;
   cout << "Enter test score: ";
   cin >> Score;
   
   // Check test score
   if ((Score >= 90) && (Score <= 100))
      cout << "You get an A\n";

   if ((Score >= 80) && (Score < 90))
      cout << "You get an B\n";

   if ((Score >= 70) && (Score < 80))
      cout << "You get an C\n";
   
   if ((Score >= 60) && (Score < 70))
      cout << "You get an D\n";
   
   if ((Score >= 0) && (Score < 60))
      cout << "You get an F\n";
   
   return 0;
}

