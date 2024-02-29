#include<iostream>
using namespace std;
int main(){
    int x,n,count=0;
    cout<<"enter the no. x : ";
    cin>>x;
    cout<<"enter the no of element in array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>x){
          count++;
        }
    }
    cout<<count;   
}