#include<iostream>
using namespace std;
int main(){
    vector<vector<int>> matrix;
    int target ;
    cout<<"enter target : ";
    cin>>target;
    int row = matrix.size();
    int col = matrix[0].size();
    int i = 0;
    int j = col-1;
    while(i<=row-1 && j>=0){
        if(matrix[i][j]==target) return true;
        else if(matrix[i][j]>target) j--;
        else i++;
    }
    return false;
}