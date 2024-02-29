#include<iostream>
using namespace std;
int main(){
    int fact=1,n,i,ct=0,result=1;
    cout<<"enter the no : ";
    cin>>n;
    for(i=1;i<n;i++){
           fact*=i;
           cout<<fact<<" ";
       
    }
}