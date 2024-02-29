#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int c11=0,c00=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1)c11++;
        else c00++;
    }
    
    int idx=0;
    int idl=0;
     for(int i=0;i<n;i++){
        if(arr[i]==0){
            idx=i;
            break;
        }
    }

    for(int i=idx;i<n;i++){
        
        if(arr[i]==1){
            idl=i-1;
            break;
        }
    }
    int ids=0;
    for(int i=n-1;i>=0;i--){
        if(arr[i]==0){
            ids=i;
            break;
        }
        
    }
    int c1=0,c0=0;
    for(int i=idx;i<=ids;i++){
        if(arr[i]==1)c1++;
        else c0++;
    }
    if(c0+1>c1)cout<<c11+ids-idx-c1;
    else cout<<c11+idx-idl;
    return 0;
}