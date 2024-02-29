#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter : "; 
    cin>>n;
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            if(i%2!=0){
                cout<<a<<" ";
                a++;
            }
            else{
                cout<<char(j+64)<<" ";
            }
        }
        cout<<endl;
    }

}