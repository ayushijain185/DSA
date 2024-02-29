#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverse(int k , queue<int> & que){
    int n = que.size();
        stack<int> st;
        for(int i=0;i<k;i++){
            st.push(que.front());
            que.pop();
        }
        while(st.size()>0){
            que.push(st.top());
            st.pop();
        }
        for(int i=0;i<n-k;i++){
            que.push(que.front());
            que.pop();
        }  
}
void display(queue<int> & que){
     int n = que.size();
        for(int i=0;i<n;i++){
            int x = que.front();
            cout<<x<<" ";
            que.pop();
            que.push(x);

        }
        cout<<endl;
}
int main(){
   queue<int> que;
    que.push(10);
    que.push(20);
    que.push(30);
    que.push(50);
    que.push(60);
    que.push(70);
    display(que);
    reverse(3, que);
    display(que);

}