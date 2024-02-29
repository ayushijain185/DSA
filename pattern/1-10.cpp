#include<iostream>
using namespace std;
int main(){
    int n,k;
    cout<<"enter : ";
    cin>>n;
    k=1;
    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<k<<" ";
    //         k++;

    //     }
    //     cout<<endl;
    // }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<1<<" ";
            }
            else cout<<0<<" ";
        }
        cout<<endl;
    }    
}