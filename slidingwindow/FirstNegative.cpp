#include<iostream>
using namespace std;
int main(){
    int arr[]={ 2 , 8 , 4 , 4 , -7 , -1 , 4 , -2 , 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int ans[n-3];
    int i=0,j=k;
    int p=-1;
    ans[0]=1;
    while(j<n){
        if(p>=i) ans[i]=arr[p];
        else{
            for(int x=i;x<j;x++){
                if(arr[x]<0){
                    p=x;
                    break;
                }
            }
            if(p>=i)ans[i]=arr[p];
            else ans[i]=1;
        }
        i++;
        j++;
    }
    for(int i=0;i<n-3;i++){
        cout<<ans[i]<<" ";
    }
}