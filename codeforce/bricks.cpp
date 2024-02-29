#include<bits/stdc++.h>
using namespace std;
int main(){
    int16_t t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n,m;
        cin>>n>>m;
        if(m==0)cout<<-1*n<<endl;
        cout<<n*(m/2)<<endl;
    }
    return 0;
}