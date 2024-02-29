#include<iostream>
using namespace std;
int main(){
    int row=-1;
    int n,m,sum=0,result=0;
    cout<<"enter rows : ";
    cin>>n;
    cout<<"enter columns : ";
    cin>>m;
    int a[n][m];
    cout<<"matrix : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum=sum+a[i][j];
        }
        if(result <sum){
            result=sum;
            row++;
        }
        
    }
    cout<<row;
}