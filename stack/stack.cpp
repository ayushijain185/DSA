#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(1);
    cout<<st.top()<<endl;
    st.push(2);
    cout<<st.top()<<endl;
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<endl;
    // traverse in reverse order
    stack<int> ss=st;
    while(ss.size()>0){
        cout<<ss.top()<<endl;
        ss.pop();
    }
     
    //  traverse
    stack<int> tt;
    while(st.size()>0){
        tt.push(st.top());
        st.pop();

    }
    cout<<endl;
    while(tt.size()>0){
        cout<<tt.top()<<endl;
        st.push(tt.top());
        tt.pop();
   }
   

}