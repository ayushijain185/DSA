#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,9,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int res=0, retval=0;
    for(int i=0;i<n;i++){
        res=res ^arr[i];
    }
    int temp=res;
    int k=0;
    while(true){
        if((temp & 1)==1)break;
        temp>>1;
        k++;
    }
     for(int i=0;i<n;i++){
        if(((arr[i]>>k)&1)==1) retval^=arr[i];
    }
    cout<<retval<<endl;
    res=res^retval;
    cout<<res<<endl;
}