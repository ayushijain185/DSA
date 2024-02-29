#include<iostream>
using namespace std;
int main(){
    int n,i;
    bool flag=0;
    cout<<"enter the no."<<endl;
    cin>>n;
    for(i=2;i<n-1;i++){
        if(n%i==0){
            flag=1;
            break;
        }
       
    }
    if(n==1 or n==0){
         cout<<"not a prime no";
    }
    else if(flag==0){
        cout<<"prime";
    }
    else{
        cout<<"not a prime no";
        }

}

