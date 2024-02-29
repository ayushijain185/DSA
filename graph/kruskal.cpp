#include<bits/stdc++.h>
using namespace std;
#define ll long long
int fnd(vector<int>& par , int x){
    if(par[x]==x)return x;
    return par[x]=fnd(par,x);
}
void unn(vector<int>& arr, vector<int>& sz,int f , int s){
    f = fnd(arr,f);
    s = fnd(arr,s);
    if(f==s)return;
    if(sz[f]>=sz[s]){
        sz[f]+=sz[s];
        arr[s]=f; 
    }
    else{
        sz[s]+=sz[f];
        arr[f]=s;
    }
}
struct Edge{
    int src;
    int des;
    int wt;
};
bool cmp(Edge e1 , Edge e2){
    return e1.wt < e2.wt;
}
ll ans=0;
ll krushkal(vector<Edge>& input , int n ,int m){
    sort(input.begin(),input.end(),cmp);
    vector<int>par(n+1);
    vector<int>sz(n+1,1);
    for(int i=0;i<=n;i++){
        par[i]=i;
    }
    int edgecount=0;
    int i=0;
    while(edgecount<n && i<m){
        Edge curr = input[i];
        int sp=fnd(par , curr.src);
        cout<<sp<<" sp ";
        int dp=fnd(par,curr.des);
        cout<<dp<<" dp ";
        if(sp!=dp){
            unn(par,sz,curr.src,curr.des);
            edgecount++;
            cout<<edgecount<<" ";
            ans+=curr.wt;
            cout<<curr.wt;
        }
        i++;
    }
    return ans;
}
int main(){
    int n , e;
    cin>>n>>e;
    vector<Edge>v(e);
    for(int i=0;i<e;i++){
        cin>>v[i].src>>v[i].des>>v[i].wt;
    }
    krushkal(v,n,e);
    cout<<ans;
    return 0;
}