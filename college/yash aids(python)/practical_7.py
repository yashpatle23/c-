#a
def sorted_dic(dic):
    lst = len(dic)
    for i in range(0, lst):
         
        for j in range(0, lst-i-1):
            if (float(dic[j][1]) < float(dic[j + 1][1])):
                temp = dic[j]
                dic[j]= dic[j + 1]
                dic[j + 1]= temp
    return dic

dic=[('item1','12.20'),('item2','15.10'),('item3','24.5')]
print(sorted_dic(dic))
#b
dic1={
    1:10,
    2:20,
}
dic2={
    3:30,
    4:40,
}
dic3={
    5:50,
    6:60,
}
dic1.update(dic2)
dic1.update(dic3)
print(dic1)
#c
dic={}    
n=int(input("enter teh number ="))
for x in range(1,n+1):
    dic.update({x:int(x*x)})
print(dic)