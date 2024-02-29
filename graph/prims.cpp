#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<list<pair<int,int>>>graph;
void add_edge(int sr , int des , int wt ,bool dir){
    graph[sr].push_back({des,wt});
    if(dir)graph[des].push_back({sr,wt});
}
ll prims(int src,int n){
    priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>>pq;
    unordered_map<int , int>mp;
    unordered_set<int>visited;
    vector<int>par(n+1);
    ll ans=0;
    pq.push({0,0});
    int total_edges=0;
    for(int i=1;i<=n;i++){
        mp[i]=INT_MAX;
        par[i]=i;
    }
    mp[0]=0;
    par[0]=-1;
    while(total_edges<n && pq.size()>0){
        auto x=pq.top();
        
        if(visited.count(x.second)){
            pq.pop();
            continue;
        }
        else{
            visited.insert(x.second);
            ans+=x.first;
            cout<<ans<<" ";
            total_edges++;
            pq.pop();
            for(auto neigh:graph[x.second]){
                if(!visited.count(neigh.first) && mp[neigh.first]>neigh.second){
                    pq.push({neigh.second,neigh.first});
                    par[neigh.first]=x.second;
                    mp[neigh.first]=neigh.second;
                }
            }
        }
    }
    return ans;
}
int main(){
    int n , m;
    cin>>n>>m;
    graph.resize(n+1,list<pair<int,int>>());
    while(m--){
        int sr , des , wt;
        cin>>sr>>des>>wt;
        add_edge(sr,des,wt,true);
    }
    int src;
    cin>>src;
    cout<<prims(src,n);
    return 0;
}