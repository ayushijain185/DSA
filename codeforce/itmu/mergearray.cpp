#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    int ar[m+n];
    int a[m];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    int i=0 , k=0 , l=0;
    while(k<n && l<m){
        if(a[l]<arr[k]){
            ar[i]=a[l];
            i++;
            l++;
        }
        else{
            ar[i]=arr[k];
            k++;
            i++;
        }
    }
    if(l<m){
        while(l<m){
            ar[i]=a[l];
            i++;
            l++;
        }
    }
    if(k<n){
        while(k<n){
             ar[i]=arr[k];
            k++;
            i++;
        }
    }
    for(int i=0;i<m+n;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}
// 6 7
// 1 6 9 13 18 18
// 2 3 8 13 15 21 25
