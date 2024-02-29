class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
          int n= arr.size();
        vector<int> ans;
        if(x<arr[0]){
            for(int i=0;i<k;i++){
                ans[i]=arr[i];
            }
            return ans;
        }

        if(x>arr[n-1]){
            int j=k-1;
            int i=n-1;
            while(j>=0){
                ans[j]=arr[i];
                j--;
                i--;
            }
            return ans;

        }
        
        int low=0;
        int high=n-1;
        bool flag=false;
        int t=0;
        int mid=-1;
        while(low<=high){
            mid=low+(high-low)/2;
            if(arr[mid]==x){
                ans[t]=arr[mid];
                t++;
                flag=true;
                break;
            }
            else if(arr[mid]>x){
                  high=mid-1;
            }
            else low=mid+1;
        }

       int lb=high;
       int ub=low;
       if(flag==true){
           lb=mid-1;
           ub=mid+1;
       }
       while(t<k && lb>=0 && ub<=n-1){
           int d1=abs(x-arr[lb]);
           int d2=abs(x-arr[ub]);
           if(d1<=d2){
               ans[t]=ans[lb];
               t++;
               lb--;

           }
           else{
               ans[t]=ans[ub];
               t++;
               ub++;
           }

       }
       if(lb<0){
           while(t<k){
               ans[t]=arr[ub];
               ub++;
               t++;
           }
       }
       if(ub>n-1){
           while(t<k){
               ans[t]=arr[lb];
               lb--;
               t++;
           }
       }
       sort(ans.begin(),ans.end());
        return ans;
    }
};