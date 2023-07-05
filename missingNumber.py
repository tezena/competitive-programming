class Solution(object):
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n=len(nums)
        for x in range(n+1):
            #  print(x)
             if x not in nums:
                 return x
