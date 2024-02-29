#include<bits/stdc++.h>
using namespace std;
vector<int> parent;
vector<int> rank;
int find(int x) {
    if(parent[x] == x) return x;
    return parent[x] = find(parent[x]);
} 
void Union(int x, int y) {
   x = find(x);
   y = find(y);
    if(rank[x] > rank[y]) {
        parent[y] = x;
        rank[x]++;
    } 
    else{
        parent[x] = y;
        rank[y]++;
    } 
}
bool detectCycle(int V, vector<int> adj[]) {
    parent.resize(V);
    rank.resize(V, 0);
    for(int i = 0; i < V; i++)parent[i] = i;
    for(int u = 0; u < V; u++) {
        for(int &v : adj[u]) {
            if(u < v) {
                if(find(u) == find(v))return true;
                else {
                    Union(u, v);
                }
            }
        }
    }
    return false;
}
int main(){
    int V;
    vector<vector<int>>adj(V, list<int>());
    cout<<detectCycle(V,adj);
    return 0;
}
