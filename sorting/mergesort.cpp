#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& v1 , vector<int>& v2 , vector<int>& v){
     int i=0, j=0, k=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]>v2[j]){
            v[k]=v2[j];
            j++;
            k++;
        }
        else{
            v[k]=v1[i];
             i++;
            k++;
        }
    }
    if(i==v1.size()){
        while(j<v2.size()){
             v[k]=v2[j];
            j++;
            k++;
        }
    }
    else{
        while(i<v1.size()){
             v[k]=v1[i];
            i++;
            k++;
        }        
    }
}
void mergesort(vector<int>& v){
     int n=v.size();
     if(n==1) return ;
     int m1=n/2,m2=n-n/2;
     vector<int> v1(m1) , v2(m2);
     for(int i=0;i<m1;i++){
       v1[i]=v[i];
     }
     for(int i=0;i<m2;i++){
       v2[i]=v[i+m1];
     }
     mergesort(v1);
     mergesort(v2);
     merge(v1,v2,v);
}
int main(){
    int arr[]={1,9,5,8,12};
    int n1=sizeof(arr)/sizeof(arr[0]);    
   vector<int> v(arr ,arr+n1);
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
   cout<<endl;
   mergesort(v);
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
}
