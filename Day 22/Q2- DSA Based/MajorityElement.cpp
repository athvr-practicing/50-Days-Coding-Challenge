class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int &i:nums) mp[i]++;
        for(auto it:mp){
            if(it.second*2>n) return it.first;
        }
        return -1;
    }
};