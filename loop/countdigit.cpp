#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"enter the no : ";
    cin>>n; 
    int temp=n;
    while(temp>0){
       temp = temp/10;
       count++;
    }
    if(n==0) cout<<1;
    else cout<<count;
}