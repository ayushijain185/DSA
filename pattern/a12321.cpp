#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter : ";
    cin>>n;
    int a=1;
    for(int i=1;i<=2*n-1;i++){
        if(i<=n-1){
        cout<<a<<" ";
        a++;
        }
        else {
        cout<<a<<" ";
        a--;
        }
    }
    cout<<endl;
    for(int i=1;i<=n-1;i++){
        int s=1;
        for(int j=1;j<=n-i;j++){
             cout<<s<<" ";
             s++;
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<" "<<" ";
        }
        for(int j=1;j<=n-i;j++){
             s--;
             cout<<s<<" ";
        }
        cout<<endl;

    }
}