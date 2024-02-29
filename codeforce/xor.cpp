#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        long long a,b;
        long long r;
        cin>>a>>b>>r;
         long long s=INT_MAX;
        for(int j=0;j<=r;j++){
            s= min(abs((a^j)-(b^j)),s);
        }
        cout<<s<<endl;
    }
}