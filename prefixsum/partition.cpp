#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag = false;
    for(int i=1;i<n;i++){
        arr[i]=arr[i]+arr[i-1];
    }
    for(int i=0;i<n-1;i++){
        if(2*arr[i] == arr[n-1])flag = true;
    }
    if(flag)cout<<"can partitioned";
    else cout<<"not partitioned array";
}