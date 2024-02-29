#include<iostream>
using namespace std;
int main(){
    int arr[9]={1,2,4,5,9,15,18,21,24};
    int high=9;
    int x=25;
    bool flag=false;
    int low=0;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==x){
             cout<<arr[mid-1];
             flag=true;
             break;
        }
        else if(arr[mid]<x) low=mid+1;
        else high = mid-1;
    }
    if(flag ==false){
        cout<<"not exist";
    }
}