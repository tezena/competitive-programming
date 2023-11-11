class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        x=str(x)
        n=x[::-1]
        if n==x:
            return True
        else:
            return False
