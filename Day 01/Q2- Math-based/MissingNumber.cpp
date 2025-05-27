class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int total = 0, req = 0;
        for (int i = 1; i <= nums.size(); i++)
        {
            total += i;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            req += nums[i];
        }
        return total - req;
    }
};