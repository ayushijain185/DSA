#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int y=0;y<t;y++){
        int alen;
        int blen;
        int k;
        cin>>alen>>blen>>k;
        unordered_set<int>s1;
        unordered_set<int>s2;

        for(int i=0;i<alen;i++){
            int x;
            cin>>x;
            if(x<=k)s1.insert(x);
        }
        for(int i=0;i<blen;i++){
            int x;
            cin>>x;
            if(x<=k)s2.insert(x);
        }
        
        if((s1.size()>=alen/2+1) && (s2.size()>=blen/2+1))cout<<"YES";
        else cout<<"NO";
    }
    return 0;
}

