SamList={34,545,32,23,4}
while True:
    print("\n\nMENU")
    print("enter your choice what you want to do\n1.if you want to clear the array\n2.to find max and min\n3.to find length")
    print("4.Exit")
    x=int(input("enter your choice="))
    if x==1:
        SamList.clear()
        print("the list is empty")
        print(SamList)
        break
    elif x==2:
        print("the minimum value of list is "+str(min(SamList)))
        print("the maximum value of list is "+str(max(SamList)))
    elif x==3:
        print("the length of set is "+str(len(SamList)))
    elif x==4:
        break
    else:
        print("wrong input")