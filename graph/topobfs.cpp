#include<bits/stdc++.h>
using namespace std;
vector<list<int>> undirected_unweighted_graph;
void topobfs(int v){
    vector<int>indegree(v,0);
    for(int i=0;i<v;i++){
        for(auto x:undirected_unweighted_graph[i]){
            indegree[x]++;
        }
    }
    queue<int>q;
    unordered_set<int>visited;
    for(int i=0;i<v;i++){
        if(indegree[i]==0){
            q.push(i);
            visited.insert(i);
        }
    }
    cout<<"topobfs : ";
    while(q.size()>0){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        for(auto neighbour:undirected_unweighted_graph[x]){
            if(!visited.count(neighbour))indegree[neighbour]--;
            if(indegree[neighbour]==0){
                q.push(neighbour);
                visited.insert(neighbour);
            }

        }

    }
}
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
        add(s,d,false);
    }
    
    for(int i=0;i<v;i++){
        cout<<i<<" -> ";
        for(auto x :undirected_unweighted_graph[i]){
            cout<<x<<" ,";
        }
        cout<<endl;
    }
    topobfs(v);
    return 0;
}