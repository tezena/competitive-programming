class Solution:
    def findGCD(self, nums: List[int]) -> int:
        def GCD(a,b):
            while b:
                a,b=b,a%b
            return a
        
        nums.sort()
        return GCD(nums[0],nums[len(nums)-1])
