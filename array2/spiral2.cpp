#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size : ";
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int minr=0,minc=0,maxr=n-1,maxc=n-1;
    while(minr<=maxr && minc<=maxc){
        if(minr>maxr || minc>maxc) break;
        for(int j=minc;j<=maxc;j++){
            cout<<arr[minr][j];
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        for(int j=minr;j<=maxr;j++){
            cout<<arr[j][maxc];
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        for(int j=maxc;j>=minc;j--){
            cout<<arr[maxr][j];
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;
        for(int j=maxr;j>=minr;j--){
            cout<<arr[j][minc];
        }
        minc++;
    }
}