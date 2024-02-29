class Solution {
public:
    int findCircleNum(vector<vector<int>>& isconnected) {
        int  n = isconnected.size();
        vector<vector<int>>graph(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;i++){
                if(isconnected[i][j]){
                    graph[i].push_back(j);
                }
            }
        }
        int ans=0;
        vector<bool>visited(n,0);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                ans++;
                queue<int>q;
                q.push(i);

                while(q.size()>0){
                    int y=q.front();
                    q.pop();
                    visited[y]=1;
                    for(auto x:graph[y]){
                        if(!visited[x]){
                            q.push(x);
                        }
                    }
                }

            }
        }
        return ans;
    }
};