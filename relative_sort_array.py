class Solution:
    def relativeSortArray(self, arr1: List[int], arr2: List[int]) -> List[int]:
            ans=[]
           
            def counter(num):
                count=arr1.count(num)
                for i in range(count):
                    ans.append(num)
                    arr1.remove(num)

            for num in arr2:
                counter(num)
            
            arr1.sort()
            ans += arr1
            return ans
