#include<iostream>
using namespace std;
void update(int arr[],int n){
    for(int i=0;i<n;i++){
        if(i%2!=0){

            arr[i]=2*arr[i];   
        }
        else{
            arr[i]=arr[i]+10;
        }
    }
}
int main(){
    int n;
    cout<<"enter an element : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    update(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;

}