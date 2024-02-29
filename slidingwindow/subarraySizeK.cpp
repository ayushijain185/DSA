#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    int k =3;
    for(int i=0;i<k;i++){   //TL -o(k)
        sum+=arr[i];
    }
    int mx = INT_MIN;
    vector<int>v(3);
    for(int i=k;i<n;i++){    //TL-o(n-k)
        if(sum>mx){
            mx=sum;
           v[0]=i-3;
           v[1]=i-2;
           v[2]=i-1;
        }   
        sum=sum-arr[i-k];
        sum+=arr[i];
    }
    cout<<"Max sum : "<<mx<<" \nAt idx : "<<v[0]<<" "<<v[1]<<" "<<v[2];
}    //TL- (o(n))