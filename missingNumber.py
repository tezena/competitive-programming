class Solution(object):
    def missingNumber(self, nums):
        
        n=len(nums)
        for x in range(n+1):
            #  print(x)
             if x not in nums:
                 return x
