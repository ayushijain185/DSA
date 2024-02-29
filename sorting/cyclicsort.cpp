#include<iostream>
using namespace std;
int main(){
    int arr[]={4,1,2,6,3,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
 
    int i=0;
    while(i<n){
        int correctidx=arr[i]-1;
        if(correctidx==i) i++;
        else swap(arr[correctidx] , arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}