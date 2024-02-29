 #include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter no. of rows : ";
    cin>>n;
    cout<<"enter no. of column : ";
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];        
        }
        cout<<endl;
    }
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[j][i]<<" ";        
        }
        cout<<endl;

    }
    int t[n][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            t[i][j]=arr[j][i];
                    
        }
        cout<<endl;

    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<t[i][j]<<" ";        
        }
        cout<<endl;

    }

} 