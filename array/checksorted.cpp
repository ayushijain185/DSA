#include<iostream>
using namespace std;
void checksort(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            cout<<"unsorted array";
            break;
        }
    }

}
int main(){
    int n;
    cout<<"enter the no of element in array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    checksort(arr,n);
}