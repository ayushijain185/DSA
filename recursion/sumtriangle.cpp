#include<iostream>
#include<vector>
using namespace std;
void sumtri(vector<int>& arr, int n){
    vector<int> temp(n-1);
    if(n==0) return;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
          if(i!=0) temp[i-1]=arr[i-1]+arr[i];
    }
    cout<<endl;
    sumtri(temp,n-1);

}
int main(){
   vector<int> arr={5,4,3,2,1};
    int n = arr.size();
    sumtri(arr, n);
}