#include<bits/stdc++.h>
using namespace std;
vector<vector<vector<double>>>dp;
double fs(double r , double p , double s){
    if(r==0) return 1.0;
    if(s==0 || p==0)return 0.0;
    if(dp[r][p][s]>-0.9)return dp[r][p][s];
    double tot=r*s+s*p+p*r;
    return dp[r][p][s]= (fs(r,p,s-1)*(r*s/tot)) + (fs(r-1,p,s)*(r*p/tot)) + (fs(r,p-1,s)*(p*s/tot));
}
double fp(double r , double p , double s){
    if(s==0) return 1.0;
     if(p==0 || r==0)return 0.0;
    if(dp[r][p][s]>-0.9)return dp[r][p][s];
    double tot=r*s+s*p+p*r;
    return dp[r][p][s] = (fp(r,p,s-1)*(r*s/tot)) + (fp(r-1,p,s)*(r*p/tot)) + (fp(r,p-1,s)*(p*s/tot));
}
double fr(double r , double p , double s){
    if(p==0) return 1.0;
     if(r==0 || s==0)return 0.0;
    if(dp[r][p][s]>-0.9)return dp[r][p][s];
    double tot=r*s+s*p+p*r;
    return dp[r][p][s]=(fr(r,p,s-1)*(r*s/tot)) + (fr(r-1,p,s)*(p*r/tot)) + (fr(r,p-1,s)*(p*s/tot));
}
int main(){
    int r,p,s;
    cin>>r>>s>>p;
    r=(double)r;
    p=(double)p;
    s=(double)s;
    dp.clear();
    dp.resize(1005,vector<vector<double>>(1005,vector<double>(1005,-1)));
    double ans_r=fr(r,p,s);
    dp.clear();
    dp.resize(1005,vector<vector<double>>(1005,vector<double>(1005,-1)));
    double ans_s=fs(r,p,s);
    dp.clear();
    dp.resize(1005,vector<vector<double>>(1005,vector<double>(1005,-1)));
    double ans_p = fp(r,p,s);
    cout<<setprecision(9)<<ans_r<<" "<<ans_p<<" "<<ans_s;

}