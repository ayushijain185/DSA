#include<iostream>
using namespace std;
int main(){
    int fact,result=1;
    cout<<"enter the no : ";
    cin>>fact;
    while(fact>0){
        result=result*fact;
        fact--;
    }
    cout<<result;
}