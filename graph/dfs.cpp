#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> undirected_unweighted_graph;
void add(int src, int des , bool dir=true){
    undirected_unweighted_graph[src][des]=1;
    if(dir)undirected_unweighted_graph[des][src]=1;
}
unordered_set<int>st;
bool path(int x,int t){
    if(x==t)return true;
    st.insert(x);
    for(auto s : undirected_unweighted_graph[x]){
        if(not st.count(s)){bool result=path(s,t);
        if(result)return true;}
    }
    return false;
}
int main(){
    int v;
    cin>>v;
    undirected_unweighted_graph.resize(v,vector<int>(v,0));
    int e;
    cin>>e;
    while(e--){
        int s , d;
        cin>>s>>d;
        add(s,d,true);
    }
    
    cout<<path(0,6);
    return 0;
}