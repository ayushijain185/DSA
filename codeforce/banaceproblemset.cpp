#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) 
{ 
    // Find Minimum of a and b 
    int result = min(a, b); 
    while (result > 0) { 
        if (a % result == 0 && b % result == 0) { 
            break; 
        } 
        result--; 
    } 
  
    // Return gcd of a and b 
    return result; 
} 
int main(){
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
        int n;
        int x;
        cin>>n>>x;
        int ans=1;
        if(n==x){cout<<1<<endl; continue;}
        if(x==1){cout<<n<<endl; continue;}
        for(int i=1;i<=sqrt(n);i++){
            int m=n;
            int l=n;
            for(int j=0;j<x-1;j++){
                m=m-i;
                l=l-(n/i);
            }
            ans=max(gcd(m,i),ans);
            ans=max(gcd(l,n/i),ans);
        }
        cout<<ans<<endl;
    }
}