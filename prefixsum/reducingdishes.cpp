class Solution {
public:
    int maxSatisfaction(vector<int>& sat) {
        int n = sat.size();
        sort(sat.begin(),sat.end());
        int ans=0;
        int idx=-1;
        vector<int>suf(n);
        suf[n-1]=sat[n-1];
        for(int i=n-2;i>=0;i--){
            suf[i]=suf[i+1]+sat[i];
            if(suf[i]>=0)
               idx=i;
        }
        if(idx==-1)return 0;
        int x=1;
        for(int i=idx;i<n;i++){
            sat[i]=sat[i]*x;
            ans +=sat[i];
            x++;
        }
        return ans;
    }
};