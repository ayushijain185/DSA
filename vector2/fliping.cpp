#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> grid;
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(0);
     v1.push_back(0);
    vector<int>v2;
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(0);
     v1.push_back(0);
    vector<int>v3;
    v1.push_back(1);
    v1.push_back(0);
    v1.push_back(0);
    v1.push_back(0);
    grid.push_back(v1);
    grid.push_back(v2);
    grid.push_back(v3);

    int n= grid.size();
    int m= grid[0].size();
    for(int i=0;i<n;i++){
        if(grid[i][0]==0){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0) grid[i][j]=1;
                else grid[i][j]=0;
            }
        }
    }
    for(int j=0;j<m;j++){
        int noz=0,noo=0;
        for(int i=0;i<n;i++){
            if(grid[i][j]==0) noz++;
            else noo++;
        }
        if(noz>noo){
             for(int i=0;i<n;i++){
                if(grid[i][j]==0) grid[i][j]=1;
                else grid[i][j]=0;
             }
        }  
    }
    int sum=0;
    int x=1;
    for(int i=0;i<n;i++){
        for(int j=m-1;j>=0;j--){
            sum=sum+(x*grid[i][j]);
            x=x*2;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<grid[i][j];
        }
        cout<<endl;
    }
    cout<<sum;   
}