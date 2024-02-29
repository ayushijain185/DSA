#include<iostream>
using namespace std;
int main(){
    int n;
    int result=0;
    cout<<"enter the no."<<endl;
    cin>>n;
    int temp=n;
    while(temp>0){
        result=result*10;
        result+=(temp%10);
        temp=temp/10;      
    }
    cout<<result;
}