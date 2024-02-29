#include<bits/stdc++.h>
using namespace std;
int fnd(vector<int>& arr,int x){
    if(arr[x]==x)return x;
    return arr[x]=fnd(arr,x);
}
void unn(vector<int>& arr, vector<int>& sz, int f , int s){
    f = fnd(arr,f);
    s = fnd(arr,s);
    if(sz[f]<sz[s]){
        sz[s]+=sz[f];
        arr[f]=s;
    }
    else{
        sz[f]+=sz[s];
        arr[s]=f;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n+1);
    vector<int>sz(n+1,1);
    for(int i=0;i<=n;i++){
        arr[i]=i;
    }
   
   int m;
   cout<<"enter queries : ";
   cin>>m;
   while(m!=0){
    string str;
    cin>>str;
    if(str=="union"){
        int x,y;
        cin>>x>>y;
        unn(arr,sz,x,y);
    }
    else{
        int x;
        cin>>x;
        cout<<fnd(arr,x)<<endl;
    }
    m--;

   }
    
    return 0;
}