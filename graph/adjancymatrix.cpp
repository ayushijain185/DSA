#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> undirected_unweighted_graph;
void add(int src, int des , bool dir=true){
    undirected_unweighted_graph[src][des]=1;
    if(dir)undirected_unweighted_graph[des][src]=1;
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
    
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cout<<undirected_unweighted_graph[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}