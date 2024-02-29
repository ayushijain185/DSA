#include<iostream>
#include<climits>
using namespace std;
void largestthree(int arr[],int n){
    int first=INT_MIN,second=INT_MIN,third=INT_MIN;
    for(int i=0;i<n;i++){
       if(first<arr[i]){
        third=second;
        second=first;
        first=arr[i];
       }
    } 
    cout<<"first greatest element : "<<first<<endl;
    cout<<"second greatest element : "<<second<<endl;
    cout<<"third greatest element : "<<third<<endl;  
}
int main(){
    int n;
    cout<<"enter an element : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    largestthree(arr,n);
}