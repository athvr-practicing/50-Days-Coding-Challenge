class Solution {
    public:
        int subarrayLCM(vector<int>& nums, int k) {
            int l=0,r=0,ans=0,mn=1;
            for(int i=0;i<nums.size();i++){
                if(nums[i]<=k&&k%nums[i]==0){
                    if(nums[i]==k){
                        ans++;
                    }
                    mn=max(mn,nums[i]);
                    if(mn==k){
                        ans+=(r-l);
                    }
                    r++;
                }
                else{
                    mn=1;
                    l=i+1;
                    r=l;
                }
            }
            return ans;
        }
};