#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char arr[][20]={"ayu" , "ayushi" , "ayush" ,"ayushman" , "aman","aditya","aaditya"};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
           if(strcmp(arr[j],arr[j+1])>0){
            char temp[20];
            strcpy(temp,arr[j]);
            strcpy(arr[j],arr[j+1]);
            strcpy(arr[j+1],temp);
           }
        }
    }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}