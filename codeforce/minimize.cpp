#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int l,r;
    cin>>l>>r;
    int arr[n];
    for(int i=0;i<n;i++){
         cin>>arr[i];
        if(arr[i]<l)cout << l;
        else if(arr[i]>r)cout << r;
        else cout << arr[i];
        cout<<" ";
    }
    return 0;

}