// C++ program to illustrate Pointers 

#include <bits/stdc++.h> 
using namespace std; 
void geeks() 
{ 
	int var = 20; 
    char ch ='c';
    string s="vanshi";

	// declare pointer variable 
	int* ptr; 
    char* pt; 
    string* p; 

	// note that data type of ptr and var must be same 
	ptr = &var; 
    pt = &ch;
    p = &s;

	// assign the address of a variable to a pointer 
    cout<<"integer"<<endl;
	cout << "Value at ptr = " << ptr << "\n"; 
	cout << "Value at var = " << var << "\n"; 
	cout << "Value at *ptr = " << *ptr << "\n"; 
    cout<<"char"<<endl;
    cout << "Value at ptr = " << pt << "\n"; 
	cout << "Value at var = " << ch << "\n"; 
	cout << "Value at *ptr = " << *pt << "\n"; 
    cout<<"string";
    cout << "Value at ptr = " << p << "\n"; 
	cout << "Value at var = " <<s<< "\n"; 
	cout << "Value at *ptr = " << *p << "\n"; 
} 
// Driver program 
int main() 
{ 
geeks(); 
return 0; 
}
