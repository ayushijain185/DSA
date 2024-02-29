#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int s=0;s<n;s++){
        int len,q;
        cin>>len>>q;
        int arr[len];
        int sum=0;
        for(int i=0;i<len;i++){
            cin>>arr[i];
            sum+=arr[i];
        }

        for(int i=0;i<q;i++){
            int x=sum;
            int query[3];
            for(int j=0;j<3;j++){
                cin>>query[j];
            }
            

            
            for(int k=query[0]-1;k<query[1];k++){
                sum-=arr[k];
                sum+=query[2];
            }

            if(sum%2==0)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
            x=sum;
        }
    }
    return 0;
}