#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int x=0;
    int arr[]={2,3,5,6,7,1,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    vector<int> v(n,0);
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        int min=9;
        int mindx;
        for(int j=0;j<n;j++){
            if(v[j]==1) continue;
            else{
                if(min>arr[j]){
                    min=arr[j];
                    mindx=j;
                }
            }
        }
        arr[mindx]=x;
        v[mindx]=1;
        x++;
    }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
}