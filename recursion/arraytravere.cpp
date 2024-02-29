#include<iostream>
#include<vector>
using namespace std;
void display(int arr[] , int n , int idx){
    if(idx==n) return ;
    cout<<arr[idx]<<" ";
    display(arr,n,idx+1);
}

int insert(vector<int> v , int arr[] , int n , int idx){
    if(idx==n) return 0;
    v[idx]=arr[idx];
    return v[idx];
    insert(v , arr , n , idx+1);
}

void display2(vector<int> v , int n , int idx){
    if(idx==n) return ;
    cout<<v[idx]<<" ";
    display2( v , n , idx+1);
}
int main(){
    int arr[]={2,3,4,6,7,4,7,8};
    int n= sizeof(arr)/sizeof(arr[0]);
    display(arr,n,0);
     cout<<endl;
    // vector
   
    vector<int> v(n);
    // for(int i=0;i<n;i++){
    //     v[i]=arr[i];
    // }
    insert(v , arr , n , 0);
    display2(v , n , 0);
}