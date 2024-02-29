#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={100,80,60,70,60,75,85};
    int n=sizeof(arr)/sizeof(arr[0]);
    stack<int>st;
    int c=1;
    int ans[n];
    st.push(0);
    ans[0]=-1;
    for(int i=1;i<n;i++){
        while(st.size()>0 && arr[st.top()]<=arr[i]){
            st.pop();
        }
        if(st.size()==0)ans[i]=-1;
        ans[i]=st.top();
        st.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<i-ans[i]<<" ";
    }
}