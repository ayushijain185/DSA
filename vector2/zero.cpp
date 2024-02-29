#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m= matrix[0].size();
        vector<vector<int>> new1= matrix;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    for(int p=0;p<n;p++){
                        new1[p][j]=0;
                    }
                    for(int q=0;q<m;q++){
                        new1[i][q]=0;
                    }
                }
            }
        }
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                matrix[i][j]=new1[i][j];
            }
        }
        
    }
};
int main(){
    vector<vector<int>> matrix;
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(8);
    matrix.push_back(v1);
    vector<int> v2;
    v2.push_back(1);
    v2.push_back(0);
    v2.push_back(1);
    matrix.push_back(v2);
    vector<int> v3;
    v3.push_back(1);
    v3.push_back(1);
    v3.push_back(3);
    matrix.push_back(v3);
    Solution sol;
    sol.setZeroes(matrix);
    for(int i=0;i<matrix.size();i++){
        for(int k=0;k<matrix[i].size();k++){
            cout<<matrix[i][k]<<" ";
        }
        cout<<endl;
    }
}