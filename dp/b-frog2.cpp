#include<iostream>
#include<algorithm>
using namespace std;
vector<int>arr;
vector<int> dp;
int k;
int f(int n){
    if(n>=h.size())return INT_MAX;
    if(n==arr.size()-1)return 0;
    if(dp!=-1)return[dp[i]];
    int ans=INT_MAX;
    for(int i=1;i<=k;i++){
        ans = min(ans,abs(arr[n]-arr[n+i])+f(n+i));
    }
    return ans;
}
int main(){
    int n;
    arr.resize(n);
    dp.resize(n,-1);
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<f(1);
}