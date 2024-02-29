#include<iostream>
using namespace std;
int main(){
    int side1 , side2 , side3;
    cout<<"Enter the side1 : ";
    cin>>side1;
    cout<<"Enter the side2 : ";
    cin>>side2;
    cout<<"Enter the side3 : ";
    cin>>side3;
    if(side1==side2==side3){
        cout<<"triangle is equilateral";
    }
    else if(side1==side2 or side2== side3 or side3==side1){
        cout<<"triangle is isoceles";
    }
    else{
        cout<<"triangle with three different sides";
    }

}