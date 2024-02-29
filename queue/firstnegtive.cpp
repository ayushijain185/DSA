#include<iostream>
using namespace std;
int main(){
    int arr[]={2,-1, -2,4,6,7,-6,-9,10};
    int k = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    int a[n-k];
    int j =0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            a[j]=i;
            j++;
        }
    }
    int m=0;
    int l =0;
    int a1[n-k];
    for(int i=0;i<n-k;i++){
        if(a[m]==i || a[m]>i && a[m]<i+k){
            a1[l]=arr[i];
            l++;
        }
        else if(a[m]<i){
            m++;
        }
        else{
            a1[l]=0;
            l++;
        }

    }
    for(int i=0;i<n;i++){
        cout<<a1[i]<<" ";
    }
}