class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,ans=INT_MIN;
        for(int i:nums){
            sum=max(i+sum,i);
            ans=max(sum,ans);
        }
        return ans;
    }
};