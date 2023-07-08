class Solution(object):
    def isAnagram(self, s, t):
       
        if Counter(s) == Counter(t):
           set1=set(s)
           set2=set(t)
           if set1==set2:
              return True
           else:
              return False 
        else:
            return False 
