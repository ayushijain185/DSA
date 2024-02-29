#include<bits/stdc++.h>
using namespace std;
class heap{
    public:
        int idx;
       vector<int>arr;
        heap(){
            idx=1;
            arr.resize(30);
        }
        int top(){
             if(idx==1)return -1;
            return arr[1];

        }
        bool isempty(){
            if(idx==1)return true;
            else return false;
        }
        int size(){
            return idx-1;
        }
        void upheapify(int i){
            while(i!=1 && arr[i/2]>arr[i]){
                int temp=arr[i/2];
                arr[i/2]=arr[i];
                arr[i]=temp;
                i=i/2;
            }
        }
        int push(int val){
            arr[idx]=val;
            upheapify(idx);
            idx++;
        }
        void downheapify(int i){
            while(true){
                if(2*i>=idx-1)break;
                if(2*i+1>=idx-1){
                    if(arr[i]>arr[2*i]){
                        swap(arr[i],arr[2*i]);
                        i=2*i;
                    }
                    break;
                }
                if(arr[2*i]<arr[2*i+1]){
                    if(arr[i]>arr[2*i]){
                        swap(arr[i],arr[2*i]);
                        i=2*i;
                    }
                    else break;
                }
                else{
                    if(arr[i]>arr[2*i+1]){
                        swap(arr[i],arr[2*i+1]);
                        i=2*i+1;
                    }
                    else break;
                }
            } 
        }
        int pop(){
            arr[1]=arr[idx-1];
            downheapify(1);
            idx--;
        }

};
int main(){
    heap hp;
    hp.push(10);
    hp.push(11);
    cout<<hp.top()<<endl;
    hp.push(30);
    hp.push(40);
    hp.push(12);
    hp.push(4);
    cout<<hp.size()<<endl;
    cout<<hp.top()<<endl;
    hp.pop();
    hp.pop();
     cout<<hp.size()<<endl;
    cout<<hp.top()<<endl;
    return 0;
}