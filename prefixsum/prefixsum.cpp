#include<iostream>
using namespace std;
int main(){
    int arr[]={1,4,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        arr[i]=arr[i]+arr[i-1];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}