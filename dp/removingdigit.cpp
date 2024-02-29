#include<bits/stdc++.h>
#include<climits>
using namespace std;
vector<int>getdig(int n){
    vector<int>v;
    while(n!=0){
        if(n%10!=0)v.push_back(n%10);
        n=n/10;
    }
    return v;
}
int f(int n,vector<int>&dp){
    if(n==0)return 0;
    if(n<=9)return 1;
    if(dp[n]!=-1)return dp[n];
    vector<int>dig=getdig(n);
    int mn = INT_MAX;
    for(int i=0;i<dig.size();i++){
        mn= min(f(n-dig[i],dp),mn);
    }
   return dp[n]=1+mn;
}
int main(){
   
    int n;
    cin>>n;
     vector<int>dp(10000006,-1);
    cout<<f(n,dp);
    return 0;
}