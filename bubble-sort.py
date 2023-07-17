def countSwaps(a):
  n=len(a)
  numSwaps=0    # Write your code here
  for x in  range (0,n-1):
    for j  in range (0,n-1):
      if a[j]>a[j+1]:
         numSwaps+=1  
         a[j],a[j+1]=a[j+1],a[j] 
                  
        
  print("Array is sorted in "+str(numSwaps)+" swaps.")
  print('First Element: '+str(a[0]))
  print("Last Element: "+str(a[n-1]))
if __name__ == '__main__':
  n = int(input().strip())
  a = list(map(int, input().rstrip().split()))

  countSwaps(a)
