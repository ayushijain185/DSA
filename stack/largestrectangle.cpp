#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    stack<int> st;
    int arr[]={2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int prev[n];
     prev[0] = -1;
     s.push(0);
     for(int i =1;i<n;i++){
        while(s.size()>0 && arr[s.top()]>=arr[i]){
            s.pop();
        }
        if(s.size()==0) prev[i]=-1;
        else prev[i]=s.top();
        s.push(i);
     }
     
    int nge[n];
     nge[n-1] = n;
     st.push(n-1);
     for(int i =n-2;i>=0;i--){
        while(st.size()>0 && arr[st.top()]>=arr[i]){
            st.pop();
        }
        if(st.size()==0) nge[i]=n;
        else nge[i]=st.top();
        st.push(i);
     }

     int maxarea =0;
     for(int i=0;i<n;i++){
        int area = arr[i] * (nge[i]-prev[i]-1);
        maxarea = max(area , maxarea);
     }
     cout<<maxarea;
}