class Solution(object):
    def smallestEvenMultiple(self, n):
        """
        :type n: int
        :rtype: int
        """
        def gcd(a, b):
            while b:
             a, b = b, a % b
            return a

        return abs(n*2)//gcd(2,n)
