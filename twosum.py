class Solution(object):
    def twoSum(self, nums, target):
        
        list1=list()
        n=len(nums)
        for i in range(n):
            for j in range(i+1,n):
                if nums[i] + nums[j] == target:
                    list1.append(i)
                    list1.append(j)
        return list1
