#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void reverse(vector<int>& v, int i,int j){
    while(i<j){
        int temp;
        temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;

     }
}
void nextpermutation(vector<int>& v){
    int n=v.size();
    int idx=-1;
    int great=0;
    for(int i=n-2;i>=0;i--){
          if(v[i]<v[i+1]){
            idx=i;
            break;
          }
    }
    if(idx==-1){
        reverse(v,0,n-1);
        return;
    }
    reverse(v,idx+1,n-1);

    for(int j=idx+1;j<v.size();j++){
        if(v[idx]<v[j]){
            great=v[j];
            break;
        }
    }
    int temp;
    temp=v[idx];
    v[idx]=v[great];
    v[great]=temp;
    return;

}
int main(){
    vector<int> v;
    v.push_back(4);
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    nextpermutation(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    
    
}