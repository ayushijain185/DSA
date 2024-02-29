#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int> dp;
int f(int k){
    if(k==0) return 1;
    int res=0;
    if(dp[k]!=-1) return dp[k];
    for(int i=1;i<=6;i++){
        if(k-i<0)break;
        res=((res % 1000000007)+(f(k-i) % 1000000007)) % 1000000007;
    }
    return dp[k]=res % 1000000007;
}
int main(){
     dp.clear();
    dp.resize(1000005,-1);
    int k;
    cin>>k;
    cout<<f(k)<<"\n";
    return 0;
}