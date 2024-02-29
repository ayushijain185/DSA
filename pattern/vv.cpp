#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-i+1;j++){
            if(i==j or i+j==(2*n)){
            cout<<"*";
            }
            else{
                cout<<" ";
            }
           
        }
         cout<<endl;
}
}