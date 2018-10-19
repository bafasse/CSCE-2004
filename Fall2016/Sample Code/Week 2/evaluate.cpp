// Include statements
#include <iostream>
using namespace std;

// Main function
int main ()
{
  // Input values
  double n1 = 8;
  double n2 = 10;
  double n3 = 12;


  // Calculate mean of 3 values
  double mean;

  mean = (n1+n2+n3)/3;

  // Calculate variance of 3 values
  double variance;

  variance = ( (n1-mean)*(n1-mean) + (n2-mean)*(n2-mean) + (n3-mean)*(n3-mean) )/3;

  // Print the output
  cout << "mean = " << mean << endl;
  cout << "variance = " << variance << endl;

  // other ways to calculate variance

  double accumulator = 0;
  int count = 0;

  accumulator = accumulator + (n1-mean)*(n1-mean);
  count = count +1;

  accumulator = accumulator + (n2-mean)*(n2-mean);
  count = count +1;

  accumulator = accumulator + (n3-mean)*(n3-mean);
  count = count +1;

  variance = accumulator/count;

  // Print the output
  cout << "mean = " << mean << endl;
  cout << "variance = " << variance << endl;



  return 0;
}

