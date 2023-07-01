if __name__ == '__main__':
    N = int(input())
    list1=list()
    
    for i in range(N):
       command=input()
       list2=list(command.split(" "))
       if list2[0]=="insert":
           list1.insert(int(list2[1]),int(list2[2]))
       elif list2[0]=="print":
            print(list1)
       elif list2[0]=="remove":
            list1.remove(int(list2[1]))
       elif list2[0]=="append":
            list1.append(int(list2[1]))
       elif list2[0]=="sort":
             list1.sort()
       elif list2[0]=="pop":
             list1.pop()
       else:
            list1.reverse()
