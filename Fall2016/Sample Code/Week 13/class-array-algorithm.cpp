/* 
 * File:   class-array-algorithm.cpp
 * Author: Wingning Li
 *
 * example for classes
 */
#include <iostream>
#include <string>

using namespace std;

class Pair {
public:
    Pair();
    ~Pair();
    void get(string& i, int& j) const;
    int get_y() const;
    string get_x() const;
    void set(string i, int j);
    void show() const;
private:
    string x;
    int y;
    //void set(int i, int j);
};

Pair::Pair(){
    x = "Hello";
    y =16;
    //cout << "calling default constructor\n";
}

Pair::~Pair(){
    //cout << "calling destructor\n";
}

void Pair::get(string& i, int& j) const {
    i = x;
    j = y;
}

int Pair::get_y() const {
    return y;
}

string Pair::get_x() const {
    return x;
}

void Pair::set(string i, int j){
    x = i;
    y = j;
}

void Pair::show() const{
    cout << x << "," << y << endl;
}

// check function
// given an array of Pair objects and a Pair object
// if the Pair object is not in the array return true, otherwise return false
// if the Pair object is in the array, the object with the largest y value is retained in the array
//
// x is the Pair array to be searched
// n is the size of the array
// p is the key Pair, where x or string is the key
//
bool check (Pair x[], int n, Pair p){
    for (int i = 0; i < n; i++){
        if ( x[i].get_x() == p.get_x() ) {
            if ( x[i].get_y() < p.get_y() ) 
               x[i] = p; //
            return false;
        }
    }
    return true;
}

int main ()
{
  Pair x[10];
  x[0].set("Hey", 10);
  x[1].set("Hello", 17);
  x[2].set("Hi", 15);
  x[3].set("Hi", 12);
  x[4].set("Hey", 18);
  x[5].set("Hi", 14);
  x[6].set("Hello", 10);
  x[7].set("Hey", 16);
  x[8].set("Hello", 3);
  // x[9] use default value
  
  for (int i = 0 ; i < 10; i++){
      x[i].show();
  }
  
  // for storing distinct elements from x
  Pair distinct[10];
  int d_count=0;
  
  // get distinct elements from x
  // where elements with the largest integer value is retained
  for (int i = 0; i <10; i++) {
      // if the element is not in distinct add it to distinct
      if ( check (distinct, d_count, x[i]) ) {
          distinct[d_count] = x[i];
          d_count++;
      }
  
  }
  
  // output values in distinct
  cout << "results===\n";
  for (int i = 0 ; i < d_count; i++){
      distinct[i].show();
  }
  
  return 0;
}
