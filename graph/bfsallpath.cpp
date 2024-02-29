#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> undirected_unweighted_graph;
void add(int src, int des , bool dir=true){
    undirected_unweighted_graph[src][des]=1;
    if(dir)undirected_unweighted_graph[des][src]=1;
}
unordered_set<int>st;
void path(int x,int t,vector<int>& pt){
    queue<int>q;
    pt.resize(7,INT_MAX);
    pt[x]=0;
    st.insert(x);
    q.push(x);
    while(q.size()>0){
        auto y=q.front();
        cout<<y<<" ";
        q.pop();
        for(auto m:undirected_unweighted_graph[y]){
            if(not st.count(m)){
                q.push(m);
                st.insert(m);
                pt[m]=pt[y]+1;
            }
        }
    }
   cout<<endl;
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
    path(0,6,pt);
    for(int i=0;i<pt.size();i++){
        cout<<pt[i]<<" ";
    }
    return 0;
}