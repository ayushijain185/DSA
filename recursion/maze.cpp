#include<iostream>
using namespace std;
int maze(int sr , int sc , int er , int ec){
    if(sr>er || sc>ec) return 0 ;
    if(sr==er && sc==ec) return 1;
    int right=maze(sr,sc+1,er,ec);
    int down=maze(sr+1,sc,er,ec);
    int total=right+down;
    return total;

}
void printpath(int sr , int sc , int er , int ec , string s){
        if(sr>er || sc>ec)return;
        if(sr==er && sc==ec) {
            cout<<s<<endl;
            return;
        }
        printpath(sr,sc+1,er ,ec ,s+'R');
        printpath(sr+1,sc,er ,ec ,s+'D');
}

// second method
int maze2(int row , int col){
    if(row==1 && col==1) return 1;
    if(row<1 || col<1) return 0;
    int right=maze2(row,col-1);
    int down=maze2(row-1,col);
    return right+down;
}
void path2(int row , int col, string s){
    if(row<1 || col<1)return;
    if(row==1 && col==1) {
        cout<<s<<endl;
        return;
    }
    path2(row,col-1 ,s+'R');
    path2(row-1,col ,s+'C');
}
int main(){
    cout<<maze(1,1,4,3);
    cout<<endl;
    printpath(1,1,4,3,"");
    cout<<endl;
    cout<<maze2(4,3);
    cout<<endl;
    path2(4,3,"");
    
   

}