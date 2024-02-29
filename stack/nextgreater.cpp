#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    int arr[]={10,6,8,5,11,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int nge[n];
     nge[n-1] = -1;
     s.push(arr[n-1]);
     for(int i =n-2;i>=0;i--){
        while(s.size()>0 && s.top()<=arr[i]){
            s.pop();
        }
        if(s.size()==0) nge[i]=-1;
        else nge[i]=s.top();
        s.push(arr[i]);
     }
     for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
     }
}