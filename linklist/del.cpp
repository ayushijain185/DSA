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
               for(int i=1;i<idx-1;i++){
                    t=t->next;
               } 
                temp->next=t->next;
                t->next=temp;
                size++;  
            }
            
        }

         void deletehead(){
            if(size<1) cout<<"empty linklist\n";
            head=head->next;
            size--;
        }

        void deletetail(){
            if(size<1) cout<<"empty linklist\n";
            else{
                node*temp = head;
                while(temp->next!=tail){
                    temp= temp->next;
                }
                temp->next=NULL;
                size--;

            }
        }

        deleteatidx(int idx){
              if(size<1) cout<<"empty linklist\n";
              else if(idx==0) deletehead();
              else if(idx==size+1) deletetail();
              else{
                node* t=head;
                for (int i= 1 ; i < idx-1 ; i++ ) {
                    t=t->next;
                }
                t->next=(t->next)->next;
                size--;
            }
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
    ll.insertatend(40);
    ll.insertatend(50);
    ll.insertatfirst(5);
    ll.insertatidx(55,5);
    ll.display();
    cout<<"size : "<<ll.size<<endl;


    ll.deletehead();
     ll.display();
    cout<<"size : "<<ll.size<<endl;
    ll.deletetail();
     ll.display();
    cout<<"size : "<<ll.size<<endl;
    ll.deleteatidx(1);
     ll.display();
    cout<<"size : "<<ll.size;
}

       