//---------------------------------------------------
// Purpose: File input and output using fstream example. 
//          Getting file name from the user example. Help for hw5
//    
//
// Authors: Wing Ning Li
//---------------------------------------------------
#include <iostream>
#include <fstream> 
using namespace std; 
int main() 
{ 
	int a[10]={};
	string filename;
	cout << "Please input the file name:";
	cin >> filename;
	fstream din;
	din.open(filename.c_str());
	
	if ( din.fail() ){
        cout << "failed to open file named: " << filename << endl;
        return 0;
    }
    
	//read in upto 10 values from file numbers.txt into array a
	for (int i=0; i < 10 && din >> a[i]; i=i+1)
		// no body
		;
	din.close();
	
	fstream dout;
	dout.open("outfile.txt", fstream::out | fstream::trunc);
	
	if ( dout.fail() ){
        cout << "failed to open file named: " << "outfile.txt" << endl;
        return 0;
    }
	
	// output non zero values upto 10
	for (int i=0; i < 10 && a[i]; i=i+1)
		dout << a[i] << ' ';
	dout << endl;
	dout.close();	
	
	// checking output on the terminal
	// output non zero values upto 10
	for (int i=0; i < 10 && a[i]; i=i+1)
		cout << a[i] << ' ';
	cout << endl;	
 	return 0;
}

