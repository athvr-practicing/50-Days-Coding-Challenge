class Solution(object):
    def twoSum(self, nums, target):
        hashMap = {}

        for ind, val in enumerate(nums):
            diff = target - val

            if diff in hashMap:
                return [hashMap[diff], ind]
            
            hashMap[val] = ind

        return []