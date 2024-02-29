class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int m = queries.size();
        vector<int>v;
        for(int i=1;i<n;i++){
            nums[i]=nums[i]+nums[i-1];
        }
        for(int i=0;i<m;i++){
            int len=0;
            int j=0,k=n-1;
            int mid;
            while(j<=k){
                mid = j+(k-j)/2;
                if(nums[mid]>queries[i])k=mid-1;
                else {
                    len=mid+1;
                    j = mid+1;
                }
            }
            v.push_back(len);
            
        }
        return v;
    }
};