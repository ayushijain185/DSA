#include<iostream>
using namespace std;
int main(){
    int x1,x2,x3,y1,y2,y3,slope1,slope2;
    cout<<"enter x1 and y1 : ";
    cin>>x1>>y1;
    cout<<"enter x2 and y2 : ";
    cin>>x2>>y2;
    cout<<"enter x3 and y3 : ";
    cin>>x3>>y3;
    slope1=(x2-x1)/(y2-y1);
    slope2=(x3-x2)/(y3-y2);
    if(slope1==slope2){
        cout<<"its lie on same line";
    }
    else{
        cout<<"not lie on same line";
    }
}