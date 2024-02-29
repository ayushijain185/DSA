#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={2,4,1,0,5,3,7,6,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<bool> v(n+1 , false);
    for(int i=0;i<n;i++){
        int ele=arr[i];
        v[ele]=true;
    }
    for(int i=0;i<=n;i++){
        if(v[i]==false){
            cout<<i;
        }
    }

}