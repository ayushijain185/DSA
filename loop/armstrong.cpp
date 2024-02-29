#include<iostream>
using namespace std;
int main(){
    int n,rem=1;
    // cout<<"enter a no. : ";
    // cin>>n;
    
    for(int i=1;i<500;i++){
        int temp=i,sum=0;
        while(i>0){
            rem=i%10;
            sum+=rem*rem*rem;
            i/=10;
            
        }
        if(temp==sum){
        // cout<<"armstrong series";
            cout<<sum<<" ";
        }
    }
}