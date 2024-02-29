#include<bits/stdc++.h>
using namespace std;
bool cmp(int x , int y){
    return x>y;
}
int main(){
    int arr[]={2,1,3,1,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int a[]={4,1,2};
    int m = sizeof(a)/sizeof(a[0]);
    sort(arr,arr+n,cmp);
    sort(a,a+m,cmp);
    int i=0,j=0;
    int h=1,v=1;
    int sum=0;
    while(i<m && j<n){
        if(arr[j]>a[i]){
            sum+=arr[j]*v;
            cout<<sum<<" ";
            j++;
            h++;
        }
        else{
            sum+=a[i]*h;
            cout<<sum<<" ";
            i++;
            v++;
        }
    }
    while(i<m){
            sum+=a[i]*h;
            cout<<sum<<" ";
            i++;
            v++;
        
    }
   
    while(j<n){
            sum+=arr[j]*v;
            cout<<sum<<" ";
            j++;
            h++;
    }
    cout<<sum<<endl;
    return 0;
}