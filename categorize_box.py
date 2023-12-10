class Solution:
    def categorizeBox(self, length: int, width: int, height: int, mass: int) -> str:
            if max(length,width,height) >= 10**4  or length*width*height >= 10**9:
                 if mass >= 100:
                     return "Both"
                 else:
                     return "Bulky"
            elif mass >= 100:
                 return "Heavy"
            else:
                 return "Neither"
