#include<iostream>
using namespace std;
int main(){
    int n,result=0;
    cout<<"enter the no : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0){
            result=result-i;
        }
        else{
            result=result+i;
        }
    }
    cout<<result;
}