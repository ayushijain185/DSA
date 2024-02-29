#include<iostream>
using namespace std;
int main()
{
    int a ,r,n;
    cout<<"enter the first term : ";
    cin>>a;
    cout<<"enter the common difference : ";
    cin>>r;
    cout<<"enter the no of term you want : ";
    cin>>n;
    cout<<a<<endl;
    for(int i=0;i<n;i++){
        a=a*r;
        cout<<a<<endl;;
    }
}