#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" "<<" ";
        }
        for(int k=1;k<n;k++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}