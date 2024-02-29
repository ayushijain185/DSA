#include<iostream>
#include<vector>
using namespace std;
int gcount=0;
int inversion(vector<int>& v1 , vector<int>& v2 ){
    int i=0,j=0;
    int count=0;
    while(i<v1.size() && j<v2.size()){
         if(v1[i]>v2[j]){
            count+=(v1.size()-i);
            j++;
         }
         else i++;

    }
    return count;
}
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
int mergesort(vector<int>& v){
   
    int n=v.size();
    if(n==1) return 0;
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
    gcount+=inversion(v1,v2);
    merge(v1,v2,v);
}
int main(){
    int arr[]={5,1,3,4,2,6};
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
   cout<<"\n"<<gcount;

}