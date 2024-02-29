#include<bits/stdc++.h>
#include<queue>
#include<vector>
using namespace std;

bool cmp(pair<int,int> &p1 , pair<int,int> & p2){
    double r1 = (p1.first*1.0)/(p1.second*1.0);
    double r2 = (p2.first*1.0)/(p2.second*1.0);
    return r1>r2;
}
double fractionalKnapset(vector<int> &weight,vector<int>& profit,int w,int n){
    vector<pair<int,int>> arr;
    for(int i=0;i<n;i++){
        arr.push_back({weight[i],profit[i]});
    }
    sort(arr.begin(),arr.end(),cmp);
    double sum=0.0;
    for(int i=0;i<n;i++){
        if(arr[i].second<=w){
            sum+=arr[i].first;
            w-=arr[i].second;
        }
        else{
            sum+=((arr[i].first*1.0)/(arr[i].second*1.0))*w;
            w=0;
            break;

        }
        return sum;
    }
}
int main(){
    vector<int> profit={60,10,120};
    vector<int> weight={10,20,30};
    int w = 50;
    int n =3;
    cout<<fractionalKnapset(weight,profit,w,n);
    return 0;

}