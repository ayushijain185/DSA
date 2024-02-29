#include<bits/stdc++.h>
using namespace std;

void addStrings(string num1, string num2,string& s) {
    int n=min(num1.size(),num2.size());
    int x=0;
    int k=num1.size()-1;
    int l=num2.size()-1;
    for(int i=n-1;i>=0;i--){
        x=x+((int)num1[k]+(int)(num2[l]));
        k--;
        l--;
        if(x<9){s=to_string(x)+s; x=0;}
        else{
            int r=x%10;
            x=x/10;
           s=to_string(r)+s;
        }
    }
    if(k!=0){
        while(k!=0){
            x=x+((int)num1[k]);
            k--;
            if(x<9){s=to_string(x)+s; x=0;}
            else{
                int r=x%10;
                x=x/10;
                s=to_string(r)+s;
            }
        }
    }
    else{
        while(l!=0){
            x=x+((int)num2[l]);
            l--;
            if(x<9){s=to_string(x)+s; x=0;}
            else{
                int r=x%10;
                x=x/10;
                s=to_string(r)+s;
            }
        }
    }
    return;
}
int main(){
    string s="";
    addStrings("11","123",s);
    cout<<"string is"<<s;
    return 0;
}
