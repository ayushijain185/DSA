#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int pre[n];
    int suf[n];
    pre[0]=1;
    for(int i=1;i<n;i++){
       pre[i]=pre[i-1]*arr[i-1];
    }
    suf[n-1]=1;
    for(int i=n-2;i>=0;i--){
       suf[i]=suf[i+1]*arr[i+1];
      
    }
    for(int i=0;i<n;i++){
         arr[i]=pre[i]*suf[i];
        cout<<arr[i]<<" ";
    }
}