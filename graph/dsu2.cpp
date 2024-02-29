#include<bits/stdc++.h>
using namespace std;
int fnd(vector<int>& arr,int x){
    if(arr[x]==x)return x;
    return arr[x]=fnd(arr,x);
}
void unn(vector<int>& arr, vector<int>& sz,vector<int>& mini,vector<int>& maxi, int f , int s){
    f = fnd(arr,f);
    s = fnd(arr,s);
    
    if(sz[f]>=sz[s]){
        sz[f]+=sz[s];
        arr[s]=f;
        maxi[s]=max(maxi[f],maxi[s]);
        mini[s]=min(mini[f],mini[s]);
    }
    else{
        sz[s]+=sz[f];
        arr[f]=s;
        maxi[f]=max(maxi[f],maxi[s]);
        mini[f]=min(mini[f],mini[s]);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n+1);
    vector<int>sz(n+1,1);
    vector<int>mini(n+1);
    vector<int>maxi(n+1);
    
    for(int i=0;i<=n;i++){
        arr[i]=mini[i]=maxi[i]=i;
    }
    
    int m;
    cout<<"enter queries : ";
    cin>>m;
    while(m>0){
        string str;
        cin>>str;
        if(str=="union"){
            int x,y;
            cin>>x>>y;
            unn(arr,sz,mini,maxi,x,y);
        }
        else{
            int x;
            cin>>x;
            x=fnd(arr,x);
            cout<<mini[x]<<" "<<maxi[x]<<" "<<sz[x]<<endl;
        }
        m--;
    }
    return 0;
}