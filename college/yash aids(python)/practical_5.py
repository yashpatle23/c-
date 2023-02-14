print("Pratical for finding the smallest in th list")
thislist=[23,25,7,23,9,12,5]
print(thislist)
small=thislist[0]
for i in range(len(thislist)):
    if small>thislist[i]:
        small=thislist[i]
print("the smallest no. is "+str(small))
print("Pratical for deleting the duplicate elemeent no. in the list")
length_of_list=len(thislist)
newlist=[]
for x in thislist:
    if x not in newlist:
        newlist.append(x)
print(newlist)