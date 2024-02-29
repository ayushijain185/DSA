#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
vector<int> dp;
int f(int k){
    if(k==1)return 0;
    if(k==2)return 1;
    if(k==3)return 1;
    if(dp[k]!=-1)return dp[k];
    return dp[k]=1+min({f(k-1),(k%2==0)?f(k/2) :INT_MAX, (k%3==0)?f(k/3):INT_MAX});
}
int main(){
    int k ;
    cin>>k;
    dp.clear();
    dp.resize(1005,-1);
    cout<<f(k);
    return 0;
}