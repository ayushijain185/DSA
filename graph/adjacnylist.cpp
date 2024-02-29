#include<bits/stdc++.h>
using namespace std;
vector<list<int>> undirected_unweighted_graph;

void add(int src, int des , bool dir){
    undirected_unweighted_graph[src].push_back(des);
    if(dir)undirected_unweighted_graph[des].push_back(src);
}
int main(){
    int v;
    cin>>v;
    undirected_unweighted_graph.resize(v,list<int>());
    int e;
    cin>>e;
    while(e--){
        int s , d;
        cin>>s>>d;
        add(s,d,true);
    }
    
    for(int i=0;i<v;i++){
        cout<<i<<" -> ";
        for(auto x :undirected_unweighted_graph[i]){
            cout<<x<<" ,";
        }
        cout<<endl;
    }
    return 0;
}