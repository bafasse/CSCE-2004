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

// return 1 if open fails
// reading upto 10 values into the array
int reading(const char filename[], int a[]){
	fstream din;
	din.open(filename);
	
	if ( din.fail() ){
        cout << "failed to open file named: " << filename << endl;
        return 1;
    }
    
	//read in upto 10 values from file numbers.txt into array a
	for (int i=0; i < 10 && din >> a[i]; i=i+1)
		// no body
		;
	din.close();
	return 0;
}

void writing(const char filename[], int a[]){
	fstream dout;
	dout.open(filename, fstream::out | fstream::trunc);
	
	if ( dout.fail() ){
        cout << "failed to open file named: " << "outfile.txt" << endl;
        return ;
    }
	
	// output non zero values upto 10
	for (int i=0; i < 10 && a[i]; i=i+1)
		dout << a[i] << ' ';
	dout << endl;
	dout.close();	

}

int main() 
{ 
	int x[10]={};
	string filename;
	cout << "Please input the file name:";
	cin >> filename;
	
	if (reading(filename.c_str(), x) == 1 ) 
		return 0;
	
	
	writing ("outfile.txt", x);
	
	// checking output on the terminal
	// output non zero values upto 10
	for (int i=0; i < 10 && x[i]; i=i+1)
		cout << x[i] << ' ';
	cout << endl;
		
 	return 0;
}

