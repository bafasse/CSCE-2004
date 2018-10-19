#include <iostream>
#include <fstream> 
using namespace std; 
int main() 
{ 
	int a[10]={};
	ifstream din;
	din.open("numbers.txt");
	//read in upto 10 values from file numbers.txt into array a
	for (int i=0; i < 10 && din >> a[i]; i=i+1)
		// no body
		;
	ofstream dout;
	dout.open("outfile.txt");
	// output non zero values upto 10
	for (int i=0; i < 10 && a[i]; i=i+1)
		dout << a[i] << ' ';
	dout << endl;	
	din.close();
	dout.close();	
 	return 0;
}

