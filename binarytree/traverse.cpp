#include<iostream>
#include<algorithm>
#include<stack>
#include<vector>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left=NULL;
        this->right=NULL;
    }
    
};
void preorder(Node* root){
    stack<Node*> s;
    s.push(root);
    while(s.size()>0){
        Node* temp = s.top();
        s.pop();
        cout<<temp->val<<" ";
        if(temp->right!=NULL) s.push(temp->right);
        if(temp->left!=NULL) s.push(temp->left);
    }
}
void postorder(Node* root){
    stack<Node*> s;
    vector<int> ans;
    s.push(root);
    while(s.size()>0){
        Node* temp = s.top();
        s.pop();
        ans.push_back(temp->val);
        if(temp->left!=NULL) s.push(temp->left);
        if(temp->right!=NULL) s.push(temp->right);
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
}
void inorder(Node* root){
    stack<Node*> s;
    while(s.size()>0 || root!=NULL){
        if(root!=NULL){
            s.push(root);
            root=root->left;
        }
        else{
            Node* temp = s.top();
            s.pop();
            cout<<temp->val<<" ";
            root=temp->right;
        }
    } 
}
int main(){
     Node* a = new Node(1);
   Node* b = new Node(2);
   Node* c = new Node(3);
   Node* d = new Node(4);
   Node* e = new Node(5);
   Node* f = new Node(6);
   Node* g = new Node(7);
   a->left=b;
   a->right=c;
   b->left=d;
   b->right=e;
   c->left=f;
   c->right=g;
   preorder(a);
   cout<<endl;
   postorder(a);
    cout<<endl;
   inorder(a);
}