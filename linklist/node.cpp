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
void display(node *head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}

int main(){
    node* a = new node(10);
    node* b = new node(20);
    node* c = new node(30);
    node* d = new node(40);
    a->next=b;
    b->next=c;
    c->next=d;
    // cout<<(a->val);
    // cout<<b;
    // cout<<b->next;
    display(a); 
}