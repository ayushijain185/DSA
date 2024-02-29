#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    int a[m];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    int c=0;

   unordered_map<int,int>mp1;

   for(int i=0;i<n;i++)mp1[arr[i]]++;

   unordered_map<int,int>mp;

   for(int i=0;i<m;i++)mp[a[i]]++;

   for(auto ele:mp1){
       if(mp.count(ele)){
            int f1=ele.second;
            int f2 = mp[ele];
            c+=(f1*f2);
       }
   }
   cout<<c;
   return 0;
}
