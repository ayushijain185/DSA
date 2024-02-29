#include<iostream>
using namespace std;
class node{
    public:
       int val;
       node *next;
       node(int val){
        this->val=val;
        this->next=NULL;
       }
};
class stack{
public:
    node* head;
    int size;
    stack(){
        head=NULL;
        size=0;
    }
    void push(int val){
        node *temp = new node(val);
        temp->next=head;
        head=temp;
        size++;
    }
    void pop(){
        if(head==NULL){
            cout<<"stack is undeflow"<<endl;
            return;
        }
        head = head->next;
        size--;
    }
    int top(){
        return head->val;
    }
    int sizes(){
        return size;  
    }

};
int main(){
    stack s;
    s.push(6);
    cout<<s.top()<<endl;
    cout<<s.sizes()<<endl;
    s.pop();

}