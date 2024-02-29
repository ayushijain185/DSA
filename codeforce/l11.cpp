#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
        int l;
        cin>>l;
        set<int>a;
        int t=i+1;
        while(t!=0){
            a.insert(t%10);
            t=t/10;
        }
        if(a.size()>1)continue;
        for(int j=1;j<=l;j++){
            t=j;
            set<int>b;
            while(t!=0){
                b.insert(t%10);
                t=t/10;
            }
            if(b.size()>1)continue;
            else {
                if(a==b)sum++;
            }
        }
    }
    cout<<sum;
    
    
  
    return 0;
}