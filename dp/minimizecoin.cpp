#include<bits/stdc++.h>
using namespace std;
vector<int>dp;
int f(int c,vector<int>a){
    if(c==0)return 0;
    if(dp[c]!=-2)return dp[c];
    int mn = INT_MAX;
    for(int i=0;i<a.size();i++){
        if(c-a[i]<0)continue;
        mn=min(mn,f(c-a[i],a));
    }
    if(mn==INT_MAX)return dp[c]=INT_MAX;
    return dp[c]=1+mn;

}

int main(){
    dp.clear();
    dp.resize(100000006,-2);
    int n,c;
    cin>>n>>c;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=f(c,a);
    if(ans==INT_MAX)cout<<"-1"<<endl;
    else cout<<ans<<endl;
    return 0;
}