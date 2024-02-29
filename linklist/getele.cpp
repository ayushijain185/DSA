#include<iostream>
using namespace std;
class node {
    public:
       int val ; 
       node* next;
       node(int val){
           this->val = val;
           this->next=NULL;
       }
};
class linklist{
    public:
       node* head;
       node* tail;
       int size;
        linklist(){
            head = tail = NULL;
            size=0;
        }
        void insertatend(int val){
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

        void insertatfirst(int val){
            node* temp = new node(val);
            if(size==0){
                head=tail=temp;
                size++;
            }
            else{
                temp->next=head;
                head=temp;
                size++;
            }   
        }

        void insertatidx(int val, int idx){
            if(idx<0 || idx>size+1) cout<<"invalid idx\n";
            else if(idx==0){
                insertatfirst(val);
            }
            else if(idx==(size+1)){
                insertatend(val);
            }
            else{
                node* temp = new node(val);
                node* t = head;
               for(int i=1;i<idx;i++){
                    t=t->next;
               } 
                temp->next=t->next;
                t->next=temp;
                size++;  
            }
            
        }

        void getelementbyidx(int idx){
            if(idx>size || idx<0) cout<<"invalid";
            else if(idx==0) cout<<head->val<<endl;
            else if(idx==size+1) cout<<tail->val<<endl;
            else{
                node*t = head;
                for(int i=1 ; i<idx;i++){
                    t=t->next;
                }
                cout<<t->val<<endl;
            }
        }

        void getelementbyval(int val){
             int count=1;
             node* t = head;
            
            while(t->val!=val) 
            {
                t=t->next;
                 count++;
            }
            cout<<val<<" at index "<<count<<"\n";
           
             
        }
        
        void display(){
            node* temp = head;
            while(temp!=NULL){
                cout<<temp->val<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }
};


int main(){
    linklist ll;
    ll.insertatend(10);
    ll.insertatend(20);
    ll.insertatend(30);
    ll.insertatfirst(5);
    ll.insertatidx(55,5);
    ll.display();
    ll.getelementbyidx(3);
    ll.getelementbyval(20);
    cout<<"size : "<<ll.size;
}