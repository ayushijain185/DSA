#include<iostream>
using namespace std;
class node{
public:
    int val;
    node* next;
    node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class linklist{
public:
    node* head;
    node* tail;
    int size;
    linklist(){
        head=tail=NULL;
        size=0;
    }
    void display(){
        node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }

    int insertatend(int val){
        node* temp = new node(val);
        if(size==0){
            head=tail=temp;
            size++;
        }
        else{
            tail->next=temp;
            tail=temp;
            size++;
        }
    }
    int insertatfirst(int val){
        node* temp = new node(val);
         if(size==0){
            head=tail=temp;
            size++;
        }
        temp->next=head;
        head=temp;
        size++;
    }
    int insertatidx(int val,int idx){
        node* temp = new node(val);
        if(idx<0 || idx>size+1)cout<<"size is smaller than your index";
        else{
            if(idx==0)insertatfirst(val);
            else if(idx==size+1)insertatend(val);
            else{
                node* t = head;
               for(int i=1;i<idx-1;i++){
                    t=t->next;
                }
                
                temp->next=t->next;
                t->next=temp;
                size++;
            }
        }
    }

};
int main(){
    linklist ll;
    ll.insertatend(10);
    ll.insertatfirst(5);
    ll.insertatidx(15,3);
    ll.insertatidx(20,3);
    ll.insertatidx(25,3);
    ll.display();
}