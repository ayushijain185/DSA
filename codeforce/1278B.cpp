#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a , b;
        cin>>a>>b;
        int c=1;
        int s=0;
        for(int i=0;i<1e9;i++){
            int sum=(i*(i+1)/2);
            if(((sum-a+b)/2 )%2==0 && (sum-a+b)/2>0){
                cout<<(sum+b-a)/2;
                break;
            }
            

        }
    }
}