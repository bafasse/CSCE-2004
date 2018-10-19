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
	// output non zero values upto 10
	for (int i=0; i < 10 && a[i]; i=i+1)
		cout << a[i] << ' ';
	cout << endl;
	din.close();		
 	return 0;
}

