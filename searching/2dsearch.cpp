#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int i=0,j=m-1;
        int pointer=matrix[i][j];
        while(i<n || j>0){
            if(pointer==target)
            cout<<pointer;
            else if(pointer>target){
                pointer=matrix[i][j-1];
            }
            else pointer=matrix[i+1][j];
        }
      cout<<"not available";
    }
};
int main(){
    vector<vector<int>> matrix= {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target=3;
    Solution s;
    s.searchMatrix(matrix,target);
}