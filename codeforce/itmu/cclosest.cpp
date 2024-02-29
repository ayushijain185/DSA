#include<iostream>
using namespace std;
int main(){
    int n , q;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<q;i++){
        int q1;
        cin>>q1;
        int low=0;
        int mid;
        int high=n-1;
        bool f=false;
        while(low<=high){
            mid=low+(high-low)/2;
            if(a[mid]==q1){
                f=true;
                break;
            }
            else if(a[mid]<q1)low=mid+1;
            else high=mid-1;
        }
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
// 5 5
// 3 3 5 8 9
// 2 4 8 1 10
