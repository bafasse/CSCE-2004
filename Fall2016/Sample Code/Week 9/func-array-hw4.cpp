
//---------------------------------------------------
// Purpose: functions and arrays illustration. Help for hw4
//    
//
// Authors: Wing Ning Li
//---------------------------------------------------
#include <iostream>
#include <cstdlib>
using namespace std;

// computing the average of values in the array
double avg(const int values[], int n){
   int total_points = 0;
   for (int i = 0; i < n; i++){       
           total_points = total_points + values[i];       
   }
   if (n == 0)
       return 0;
   else
       return (double) total_points / n;
}

void listing(string title[], int hours[], int n){
    cout << "My program currently has " << n << " members of my family" << endl;
    for (int i = 0; i < n; i++) {
        cout << title[i] << endl;
        cout << hours[i] << endl;
    }
}

void get_member(string& relative, int& hours, int i){
   // Read course name
   cout << "Enter the relative for your next family member "<< i << endl;
   cin >> relative;

   cout << "Enter the age of the family member "<< i << endl;
   cin >> hours;   
}

// Main body of program
int main()
{
   // array size]
   const int size = 10;
   // parallel arrays
   string name[size] = {"Mom", "Dad", "Sister"};
   int age[size] = {48,50,18};
   int classes = 3; // hard coded as we initialize our array with 3 elements
   
	cout << "\n\nHere is my family:\n";
	listing(name, age, classes);
	
   cout << "The average age of my family is " << avg(age, classes) << endl << endl;
   
   // adding new members method one
   string s;
   int n;
   get_member(s,n,classes+1);
   name[classes] = s;
   age[classes] = n;
   classes = classes + 1;
   
   cout << "\n\nHere is my family:\n";
	listing(name, age, classes);
	
	cout << "The average age of my family is " << avg(age, classes) << endl << endl;
	
	// adding new members method two
	
   get_member(name[classes],age[classes],classes+1);
   classes = classes + 1;
   
   cout << "\n\nHere is my family:\n";
	listing(name, age, classes);
	
	cout << "The average age of my family is " << avg(age, classes) << endl << endl;
           
   cout << "Thank you for using me to learn functions and arrays, terminating...\n";
   return 0;
}

