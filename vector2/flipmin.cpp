#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> v;
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(0);
    v1.push_back(1);
    vector<int> v2;
    v2.push_back(1);
    v2.push_back(1);
    v2.push_back(1);
    vector<int> v3;
    v3.push_back(1);
    v3.push_back(0);
    v3.push_back(1);
    // 2d array
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    int n=v.size();
    int m= v[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]==0){
               v[0][j]=0;
               v[i][0]=0;
            }
        }
    }
    for(int i=m-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            if(v[i][0]==0 && v[j][0]==0){
                v[i][j]==0;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}