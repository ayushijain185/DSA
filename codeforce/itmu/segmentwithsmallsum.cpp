#include<bits/stdc++.h>
#include<climits>
using namespace std;
int main(){
    int n,s;
    cin>>n>>s;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0;
    int sum=0;
    int mn=INT_MAX;
    for(int r=0; r<n; r++){
        sum += arr[r];
        while(sum-arr[l] >= s){
            sum -= arr[l];
            l++;
        }
        if(sum>=s)
            mn = min(mn, r-l+1);
    }
    cout<<mn;

}
// 7 20
// 2 6 4 3 6 8 9
