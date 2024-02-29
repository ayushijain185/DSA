#include<iostream>
using namespace std;
int main(){
     int n,c=0;
     cin>>n;

    while(n!=0)
    {
        if(n%2==1)
            c++;

        n=n/2;
    }

    cout<<c;

    return 0;
}