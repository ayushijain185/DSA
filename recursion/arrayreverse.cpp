#include<iostream>
using namespace std;
int reverse(int arr[] , int n){
    if(n<0)return 0;
    cout<<arr[n]<<" ";
    reverse(arr,n-1);
}
int main(){
    int arr[]={1,4,6,8,9,13,16,19};
    int n= sizeof(arr)/sizeof(arr[0])-1;
    cout<<reverse(arr , n);
}