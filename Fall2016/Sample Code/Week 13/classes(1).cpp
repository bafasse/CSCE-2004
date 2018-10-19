/* 
 * File:   classes.cpp
 * Author: Wingning Li
 *
 * example for classes
 */

#include <cstdlib>
#include <iostream> // for cin and cout
#include <fstream>  // for fstream class
#include <cstring>  // for c string
#include <string>   // for c++ string

using namespace std;

// not a very useful class
class Pair {
    int x;
    string y;
};

// struct in C++ is a class where everyting is public
struct Pair1 {
    int x; // member or attribute
    string y; // member or attribute
    void show(); // member function or method declaration
};

// member function implementation
void Pair1::show() {
    cout << x << "," << y << endl;
}

class Pair2 {
	public:
		Pair2();
		// note: for methods uisng parameters
		// declaration only needs the type of the parameter
		Pair2(string, int);
		void show() const;
		void get(string &, int &) const;
		void set(string, int);
	private:
		int x;
		string y;
};

Pair2::Pair2() {
	y = "Hello, World!";
	x = 2016;
}

// implementation needs both type and name
Pair2::Pair2(string s, int i) {
	y = s;
	x = i;
}

void Pair2::show() const{
	cout << "The string value: " << y << endl;
	cout << "The integer value: " << x << endl;
}

void Pair2::get(string& str, int& n) const{
	cout << "At get method" << endl;
	str = y;
	n = x;
}

void Pair2::set(string new_y, int new_x) {
	cout << "At set method" << endl;
	y = new_y;
	x = new_x;
}
	



int main() {
  
  // using classes we introduced above, Pair, Pair1, Pair3
  Pair p;
  //p.x=1; // will result in compilation error since x is private
  
  Pair1 p1;
  p1.x=1;
  p1.y ="Hey";
  p1.show();
  
  Pair2 p2;
  Pair2 p3("Hi! Mom", 1996);
  p2.show();
  p3.show();
  p3.set("Hi! Everyone", 1000);
  p3.show();
  string sss;
  int iii;
  p2.get(sss,iii);
  p3.set(sss,iii);
  p3.show();
  
  cout << "Type a string: ";
  cin >> sss;
  cout << "Type a whole number: ";
  cin >> iii;
  
  p2.set(sss,iii);
  p2.show();
  p3.show();
  
  // array of objects of type Pair2
  
  Pair2 a[3];
  
  for ( int i = 0; i < 3; i++){
  		cout << "entry " << i << endl;
  		a[i].show();
  	}
  
  
  return 0;
}

