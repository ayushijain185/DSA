#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(int x , int y){
    return x>y;
}
long long int mincost(vector<long long int>& x , vector<long long int>& y){
    sort(x.begin(),x.end(),cmp);
    sort(y.begin(),y.end(),cmp);
   long long int h = 1;
    long long int v =  1;
    int i=0,j=0;
    long long int ans=0;
    while(i<x.size() and j<y.size()){
        if(y[j]>x[i]){
            ans+=y[j]*v;
            cout<<ans<<" ";
            h++;
            j++;
        }
        else{
             ans+=x[i]*h;
             cout<<ans<<" ";
            v++;
            i++;
        }
    }
    while(j<y.size()){
            ans+=y[j]*v;
            cout<<ans<<" ";
            h++;
            j++;
    }
    while(i<x.size()){
        ans+=x[i]*h;
        cout<<ans<<" ";
        v++;
        i++;
    }
    return ans;
}
int main(){
    vector<long long int>x={2,4,1};
    vector<long long int> y = {2,1,3,4,1};
    long long int m = 6;
    long long int n = 4;
    cout<<mincost(x,y);
    return 0;
}