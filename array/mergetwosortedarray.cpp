#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(7);
    v.push_back(11);
    v.push_back(12);
    v.push_back(14);

    vector<int> v1;
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(8);

    int n=v.size() + v1.size();
    vector<int> v2(n);
    int i=0,j=0;
    int k=0;
    while(i<v.size() && j<v1.size()){
        if(v[i]<v1[j]){
             v2[k]=v[i];
             i++;
            //  k++;
        }
        else if(v[i]>v1[j]){
            v2[k]=v1[j];
            j++;
            // k++;
        }
        k++;
    }
    if(i==v.size()){
         while(j<v1.size()){
            v2[k]=v1[j];
            j++;
            k++;
        }
    }
    if(j==v1.size()){
        while(i<v.size()){
            v2[k]=v[j];
            i++;
            k++;
        }
    }
        
    for(int a=0;a<v2.size()-1;a++){
        cout<<v2[a]<<" ";
    }
}