#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter : ";
    cin>>n;
    for(int i=1;i<=n-1;i++){
        int s=1;
        for(int j=1;j<=i;j++){
            cout<<s<<" ";
            s++;
        }
        for(int j=n-i;j>=1;j--){
            cout<<" "<<" ";
        }

         for(int j=n-i;j>1;j--){
            cout<<" "<<" ";
        }
        for(int k=i;k>=1;k--){
            s--;
            cout<<s<<" ";
        }
        cout<<endl;
    }
    int a=1;
    for(int i=1;i<=2*n-1;i++){
        cout<<a<<" ";
        a++;
    }

    
}