//---------------------------------------------------
// Purpose: introduction to classes
// 			1) use string class
//				2) design rectangle class
//    
//
// Authors: Wing Ning Li
//---------------------------------------------------
#include <iostream>
#include <fstream> 
#include <cstring>
using namespace std; 
class Rectangle{
	public:
		Rectangle(); // constructor
		//~Rectangle(); not needed unless dynamic memory allocation is used
		int area() const;  // method or member function
		void get(int& w, int& l) const;
		void set(int w, int l);
	private:
		int width; // attribute or member
		int length;
};

Rectangle::Rectangle(){
	width = 0;
	length = 0;
}

int Rectangle::area() const{
	return width*length;
}

void Rectangle::get(int& w, int& l) const{
	w = width;
	l = length;
}

void Rectangle::set(int w, int l){
	width = w;
	length = l;
}


int main() 
{ 
	string s="Hi"; // s is an object of class string
	string str="Hey"; // str is an object of class string
	
	int i = s.length();
	cout << "the length of s is " << i << endl;
	i = str.length();
	cout << "the length of str is " << i << endl;

	char cstring[80];
	strcpy(cstring, s.c_str());
	cout << "the value of cstring is " << cstring << endl;
	
	s.append(str);
	cout << "the value of s after the append is " << s << endl;
	
	s.push_back('!');
	cout << "the value of s after the push_back is " << s << endl;
	
	s.insert(2, ",");
	cout << "the value of s after the insert is " << s << endl;
	
	s.replace (s.find(","), 1, "! ");
	cout << "the value of s after the replace is " << s << endl;
	
	for (int i = 0; i< s.length(); i++)
		cout << s[i] << endl;
	
	s[2] = '?';
	cout << "the value of s after the s[2] = '?' is " << s << endl;
	
	// using rectangle class that we defined
	
	Rectangle r1; // using the default constructor
	
	// check the area of r1
	cout << "the area of r1 is " << r1.area() << endl;
	
	// retrieve the width and length of r1
	int ww;
	int ll;
	r1.get(ww,ll);
	cout << "the width and length of r1 are respectively " << ww << " and " << ll << endl;
	
	// let us adjust r1 rectangle object
	r1.set(3,4);
	cout << "the area of r1 is " << r1.area() << endl;
	
	// let us have another retangle object
	Rectangle r2;
	r2.set(10,10);
	cout << "the area of r2 is " << r2.area() << endl;	
	
	
 	return 0;
}

