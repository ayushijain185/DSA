#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n,m;
    cin>>n>>m;
    int a1[n];
    int a2[m];

    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>a1[i];
        mp[a1[i]]++;
    }
    map<int,int>mp2;
    for(int i=0;i<m;i++){
        cin>>a2[i];
        mp2[a2[i]]++;
    }
    int sum=0;
    for(auto x:mp){
        if(mp2.find(x.first)!=mp2.end()){
            sum+=x.second*mp2[x.first];
        }
    }
    cout<<sum;
    return 0;
}
