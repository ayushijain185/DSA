#include<iostream>
using namespace std;
int are(float x){
    return x*3.14*x;
}
int main(){
    float r;
    cout<<"radius : ";
    cin>>r;
    cout<<are(r);
}