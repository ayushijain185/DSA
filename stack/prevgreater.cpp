#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    int arr[]={3,1,2,5,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int prev[n];
     prev[0] = -1;
     s.push(arr[0]);
     for(int i =0;i<n;i++){
        while(s.size()>0 && s.top()<=arr[i]){
            s.pop();
        }
        if(s.size()==0) prev[i]=-1;
        else prev[i]=s.top();
        s.push(arr[i]);
     }
     for(int i=0;i<n;i++){
        cout<<prev[i]<<" ";
     }
}