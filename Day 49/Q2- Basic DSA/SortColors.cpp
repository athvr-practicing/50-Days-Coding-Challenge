class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,count1=0,placeZ=0;
        while(i<nums.size())
        {
            if(nums[i]==0)
            nums[placeZ++]=0;
            else if(nums[i]==1)
            count1++;
            i++;
        }
        while(count1-->0 && placeZ<nums.size())
        nums[placeZ++]=1;

        while(placeZ<nums.size())
        nums[placeZ++]=2;
    }
};