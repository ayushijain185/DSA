#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int quick(vector<int>& v , int idx , int n){
     int c=0;
    for(int i=idx;i<=n;i++){
        if(v[i]<v[idx])c++;
    }
     int pivotidx=c+idx;
    swap(v[idx],v[pivotidx]);
    int i=idx,j=n;
    while(i<pivotidx && j>pivotidx){
        if(v[i]>v[pivotidx] && v[j]<v[pivotidx]){swap(v[i],v[j]); i++; j--;}
        else if(v[i]<=v[pivotidx])i++;
        else j--;
    }
}
int quicksort(vector<int>& v,int idx,int n){
     if(idx>=n) return 0;
    int pi=quick(v,idx,n);
    quicksort(v,idx,pi-1);
    quicksort(v,pi+1,n);

}
int main(){
    int arr[]={5 , 1 , 8 , 2 , 7 , 6 , 3 , 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    quicksort(v,0,n-1);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}