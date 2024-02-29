#include<iostream>
using namespace std;
int main(){
    int n,rem=0;
    cout<<"enter a no.";
    cin>>n;
    int num=n;
    while(n>0){
         rem*=10;
        rem+=(n%10);
       
        n/=10;
    }
    cout<<rem<<endl;
    cout<<rem+num;
}
