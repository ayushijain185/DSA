#include<iostream>
#include<vector>
using namespace std;
int minimumproduct(vector<int>&v){
    int c=0;
    int z=0;
    int pro=1;
    for(int i=0;i<v.size();i++){
        if(v[i]==0)z++;
        else if(v[i]<0)c++;
        else continue;
    }
    sort(v.begin(),v.end());
    if(z<0) return 0;
    else if(c==0) return v[0];
    else if(c%2!=0){
        for(int i=0;i<v.size();i++)
            pro *=v[i];
        }
    else {
        for(int i=0;i<v.size();i++){  
            if(v[i+1]>0)continue;
            else pro*=v[i];
        }
    }
    return pro;

}
int main(){
    vector<int> v={-2,-3,-4,-1,7,8,9};
    cout<<minimumproduct(v);
    return 0;
}