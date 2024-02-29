// 867
#include<iostream>
#include<vector>
using namespace std;
int transpose(vector<vector<int>>& matric)
{
    int m=matric.size();
    int n=matric[0].size();
    vector<vector<int>> t(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            t[i][j]=matric[j][i];
        }
    }
    return t;
    
}
int main(){
     vector<vector<int>> matric(n,vector<int>(m));


}