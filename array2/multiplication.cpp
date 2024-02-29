#include<iostream>
using namespace std;
int main(){
    int m,n,p,q;
    cout<<"enter a row 1st matrix : ";
    cin>>n;
    cout<<"enter a column 1st matrix : ";
    cin>>m;
    cout<<"enter a row 2nd matrix : ";
    cin>>p;
    cout<<"enter a column 2nd matrix : ";
    cin>>q;
    if(m==p){
        int a[n][m];
        int b[p][q];
        int res[n][q];
        cout<<"1st array : "<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        cout<<"2nd array : "<<endl;
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }
        cout<<"multiplicated array : "<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<q;j++){
                for(int k=0;k<p;k++){
                    res[i][j]=0;
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"we cant multiple the array because of size. ";
    }
}