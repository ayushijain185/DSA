#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        long long l;
        cin>>l;
        long long arr[l];
        for(long long i=0;i<l;i++){
            long long m;
            cin>>m;
            arr[i]=m-i;
        }
        long long ans=0;
        unordered_map<long long,long long>mp;
        for(int i=0;i<l;i++){
            long long x=(long long)(arr[i]);
            if(mp.find(x)!=mp.end()){
              ans+=mp[x];
              mp[x]++;
            }
            else mp[x]++;
        }
        cout<<ans<<endl;
    }
}