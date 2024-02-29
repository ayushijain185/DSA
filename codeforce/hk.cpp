#include <bits/stdc++.h>

using namespace std;




int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int N , k;
        cin>>N>>k;
        int s=N-k;
        long long n;
        cin>>n;
        long long m=n;
        long long p=1;
        while(N>s){
            long long r=m%10;
            m=m/10;
            p*=r;
            N--;
        }
        long long mx=INT_MIN;
        while(m!=0){

            mx=max(mx,p);
            p=p/(n%10);
           n=n/10;
           p*=(m%10);
           m=m/10;
           
        }
        cout<<mx<<endl;
    }
   
    return 0;
}
// 3675356291