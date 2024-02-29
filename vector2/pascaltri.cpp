#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>pascal(int numRows){
    int m = numRows;
        vector<vector<int>> v;
        for(int i=0;i<m;i++){
            vector<int> a(i+1);
            v.push_back(a);
            for(int j=0;j<=i;j++){
                if(i==j || j==0) v[i][j]=1;
                else{
                    v[i][j]=v[i-1][j-1]+v[i-1][j];  
                }
            }
        }

   for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter row : ";
    cin>>n;
    vector<vector<int>> v = pascal(n);
    
    

}