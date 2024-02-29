#include<iostream>
using namespace std;
int main(){
    int length , breadth;
    cout<<"enter the length : ";
    cin>>length;
    cout<<"enter the breadth : ";
    cin>>breadth;
    int area;
    area = length * breadth;
    cout<<"area of rectangle : ";
    cout<<area<<endl;
    int perimeter;
    perimeter=2*(length+breadth);
    cout<<"perimeter of rectangle : ";
    cout<<perimeter<<endl;
    if(area>perimeter){
        cout<<"area is greater than perimeter";
    }
    else if(area<perimeter){
        cout<<"perimeter is greater than area";
    }
    else{
        cout<<"bith are equal";
    }
}