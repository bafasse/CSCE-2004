
//---------------------------------------------------
// Purpose: basic algorithms and their implementation using functions
//    
//
// Authors: Wing Ning Li
//---------------------------------------------------
#include <iostream>
#include <cstdlib>
using namespace std;

// interchange two integer values
void swap(int& x, int& y){
	int tmp = x;
	x = y;
	y = tmp;
}

// interchange x and y if x > y
void bubble(int &x, int& y){
	if (x > y)
		swap(x,y);
}

// bubble down, assume left <= right
void bubble_down(int a[], int left, int right) {
	for (int i = left; i < right; i = i+ 1)
		bubble(a[i], a[i+1]);
}

// sorting a[left] to a[right] increasingly, assume left <= right
void bubble_sort(int a[], int left, int right) {
	for (int i = right; i > left; i = i - 1)
		bubble_down(a, left, i);
}

// assume size >= 1, output the array elements in one line separated by ,
void display(int a[], int size) {
	for (int i = 0; i < size - 1; i = i + 1)
		cout << a[i] << ',';
	cout << a[size-1] << endl;
}

// a[left] to a[right-1] are sorted increasingly, insert a[right] into the sorted
// a[left] to a[right-1] so that a[left] to a[rihgt] are sorted
void insert_into(int a[], int left, int right){
	int i;
	int insert_data = a[right];
	for (i = right-1; i >= 0 && a[i] > insert_data; i = i -1)
		a[i+1] = a[i];
	a[i+1] = insert_data;
}

// sorting a[left] to a[right] increasingly, assume left <= right
void insertion_sort(int a[], int left, int right) {
	for (int i = left+1; i < right + 1; i = i + 1)
		insert_into(a, left, i);
}

// make a[] array a copy of b[] array
void copy(int a[], int b[], int size){
	for (int i = 0; i < size; i=i+1)
		a[i] = b[i];
}

// Main body of program
int main()
{
   const int size =10;
   int values[size] = {48,50,18,70,3,7,777,16,23,20};
   int x[size];
   
   cout << "\nmaking the complete array sorted using bubble sort\n";
   copy(x, values, size);
   display (x, size);
   bubble_sort(x, 0, size-1);
   display (x, size);
   
   cout << "\nmaking the complete array sorted using insertion sort\n";
   copy(x, values, size);
   display (x, size);
   insertion_sort(x, 0, size-1);
   display (x, size);
   
   cout << "\nmaking x[2] to x[8] sorted using bubble_sort\n";
   copy(x, values, size);
   display (x, size);
   bubble_sort(x, 2, 8);
   display (x, size);
   
   cout << "\nmaking x[0] to x[5] sorted using insertion_sort\n";
   copy(x, values, size);
   display (x, size);
   insertion_sort(x, 0, 5);
   display (x, size);
   
   
   return 0;
}

