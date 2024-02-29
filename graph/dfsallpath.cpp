#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> undirected_unweighted_graph;
void add(int src, int des , bool dir=true){
    undirected_unweighted_graph[src][des]=1;
    if(dir)undirected_unweighted_graph[des][src]=1;
}
unordered_set<int>st;
vector<vector<int>>result;
void path(int x,int t,vector<int>&pt){
    if(x==t){
        pt.push_back(x); 
        result.push_back(pt);
        pt.pop_back();
        return;
    }
    st.insert(x);
    pt.push_back(x);
    for(auto s : undirected_unweighted_graph[x]){
        if(not st.count(s)){path(s,t,pt);}
    }
    pt.pop_back();
    st.erase(x);
    return;
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
    vector<int>pt;
    path(0,5,pt);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[0].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}