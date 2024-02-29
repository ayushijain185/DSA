#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &v1 , vector<int> &v2,vector<int> &v){
    int i=0, j=0, k=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]>v2[j]){v[k]=v1[i]; i++; k++;}
        else {v[k]=v2[j]; j++; k++;}
    }
     if(v1.size()==i){
        while(v2.size()>j){ v[k]=v2[j]; k++; j++;}
    }
    if(v2.size()==j){
        while(v1.size()>i){ v[k]=v1[i]; k++; i++;}
    }
  
}
void mergesort(vector<int> &v){
    int n = v.size();
    int n1=n/2;
    int n2=n-n/2;
    if(n==1) return ;
    vector<int> v1(n1) ,v2(n2);
    for(int i=0;i<n1;i++){
        v1[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        v2[i]=v[i+n1];
    }
    mergesort(v1);
    mergesort(v2);
    merge(v1,v2,v);
}
int main(){
    int arr[]={1,9,5,8,12};
    int n1=sizeof(arr)/sizeof(arr[0]);    
   vector<int> v(arr ,arr+n1);
   mergesort(v);
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
}

