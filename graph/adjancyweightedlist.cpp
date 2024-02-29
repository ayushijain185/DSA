#include<bits/stdc++.h>
using namespace std;
vector<list<pair<int,int>>> undirected_unweighted_graph;
void add(int src, int des ,int weight, bool dir=true){
    undirected_unweighted_graph[src].push_back({des,weight});
    if(dir)undirected_unweighted_graph[des].push_back({src,weight});
}
void display(int v){
    for(int i=0;i<v;i++){
        cout<<i<<" -> ";
        for(auto x :undirected_unweighted_graph[i]){
            cout<<" ("<<x.first << " , "<<x.second<<") "<<" ,";
        }
        cout<<endl;
    }
}
int main(){
    int v;
    cin>>v;
    undirected_unweighted_graph.resize(v,list<pair<int,int>>());
    int e;
    cin>>e;
    while(e--){
        int s , d,w;
        cin>>s>>d>>w;
        add(s,d,w,true);
    }
    
    display(v);
    return 0;
}