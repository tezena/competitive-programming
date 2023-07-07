class Solution(object):
    def isPalindrome(self, s):
        if s is " ":
          return True
        else:
          s= re.sub(r'\W+','',s)
          s= re.sub(r'_','',s)
          x=s.replace(" ","").lower()
          print(x)
          result=x[::-1]
          print(result)
          if result == x:
             return True
          else:
             return False
