#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n;
    cin>>m;
    vector<int>a(n+1,0);
    for(int i=0;i<m;i++){
        int L,R;
        cin>>L>>R;
        a[L]=1;
        a[R+1]=-1;
    }
    for(int i=1;i<n+1;i++){
        a[i]=a[i]+a[i-1];
    }
    vector<int>c(100000007,0);
    for(int i=0;i<=n;i++){
        int coin=a[i];
        c[coin]++;
    }
    for(int i=c.size()-2;i>=0;i--){
        c[i]=c[i]+c[i+1];
    }
    int q;
    cin>>q;
    while(q--){
        int k;
        cin>>k;
        cout<<c[k]<<" ";
    }
}