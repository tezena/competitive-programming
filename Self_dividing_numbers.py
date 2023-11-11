class Solution(object):
    def selfDividingNumbers(self, left, right):
        """
        :type left: int
        :type right: int
        :rtype: List[int]
        """
        def isSelfDividing(num):
            for digit in str(num):
                if int(digit) == 0 or num % int(digit) !=0 :
                    return False
            
            return True
                
        answer=[]
        for num in range(left,right +1):
            if isSelfDividing(num):
                answer.append(num)

        return answer
