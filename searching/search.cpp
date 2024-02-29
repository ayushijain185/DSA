#include<iostream>
using namespace std ;
int main(){
    int n;
    cout<<"enter a no of element wants in array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the element : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"enter the target : ";
    cin>>target;
    bool flag=false;
    int low=0;
    int high=n;
    while(low<=high){
        int mid=(high-low)/2;

        if(arr[mid]==target){ cout<<"index : "<<mid; flag=true; break;}
        else if(arr[mid]>target) high=mid-1;
        else low=mid+1;
    }
    if(flag==false) cout<<"does not exist";
}