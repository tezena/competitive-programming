class Solution(object):
    def fizzBuzz(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        answer=[n]
        fizz="Fizz"
        for x in range(n):
           if x%3 == 0:
               answer[x-1]=fizz
           elif x%5 == 0:
                answer[x-1]="Buzz"
                if x%15==0:
                    answer[x-1]==fizz+"Buzz"
           else:
                 answer[x-1]=x
