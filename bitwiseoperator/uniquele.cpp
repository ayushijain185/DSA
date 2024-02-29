#include<iostream>
using namespace std;
int main(){
    int arr[]={9,2,3,4,3,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=0;
    for(int i=0;i<n;i++){
        ans=arr[i] ^ ans;
    }
    cout<<ans;
}