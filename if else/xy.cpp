#include<iostream>
using namespace std;
int main(){
    int x , y;
    cout<<"Enter the x : ";
    cin>>x;
    cout<<"Enetr the y : ";
    cin>>y;
    if(x==0 and y!=0){
        cout<<"y axis";
    }
    else if(x!=0 and y==0){
        cout<<"x axis";
    }
    else if(x==0 and y==0){
        cout<<"origin";
    }
    else{
        cout<<"both x and y axis";
    }
}