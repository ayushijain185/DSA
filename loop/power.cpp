#include<iostream>
using namespace std;
int main(){
    float result=1;
    int power,n,p;
    cout<<"enter n : ";
    cin>>n;
    cout<<"enter p : ";
    cin>>p;
    if(p<0){
        power=-p;
    }
    else{
        power=p;
    }
    for(int i=1;i<=power;i++){
        result=result*n;
    }
    if(p<0){
         cout<<1/result;
    }
    else if(p==0){
        cout<<1;
    }
    else{
        cout<<result;
    }
   
}