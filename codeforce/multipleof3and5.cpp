#include <bits/stdc++.h>
using namespace std;
int calculate_sum(int a, int n){
   int m = n / a; //no. of factor
    int sum = m * (m + 1) / 2; //sum of factor
    int ans = a * sum; 
    return ans;
}
 
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int l;
        cin>>l;
        int sum=0;
        sum+=calculate_sum(3,l-1);
        sum+=calculate_sum(5,l-1);
        sum-=calculate_sum(15,l-1);
        cout<<sum<<endl;
    }
    return 0;
}


