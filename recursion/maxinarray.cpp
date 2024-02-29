#include<iostream>
using namespace std;
int maxinarray(int arr[] , int n , int idx){
    if(idx==n) return -1;
    return max(arr[idx] , maxinarray(arr , n , idx+1));
}
int main(){
    int arr[]={3 , 8 , 7 , 6};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<maxinarray(arr , n,0);
}