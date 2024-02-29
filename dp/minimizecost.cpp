#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int> dp;
int x=3;
int f(int k,vector<int>& d){
    if(k==0) return 0;
    int res = INT_MAX;
    if(dp[k]!=-1)return dp[k];
    for(int i=0;i<d.size();i++){
        if(k-d[i]<0)continue;
        res= min(res,f(k-d[i],d));
    }
    return dp[k]=1+res;
}
int main(){
    dp.clear();
    dp.resize(100005,-1);
    int k;
    cin>>k;
    vector<int> d={1,5,7};
    cout<<f(k,d)<<"\n";
    return 0;
}