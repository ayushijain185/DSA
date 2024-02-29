#include<iostream>
using namespace std;
int index(int arr[], int n , int idx, int target){
    if(n==idx) return -1;
    if(arr[idx]==target) return idx;
    index(arr, n , idx+1, target);
}
int main(){
    int arr[]={1,2,3,5,6,7,8,9,13,16,18};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<index(arr,n,0,11);
}