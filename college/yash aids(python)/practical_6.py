thislist=["abc","xyz","aba",'1221','54564','jshd']
n=0
for x in thislist:
    if len(x)>2 and x[0]==x[-1]:
        n+=1
print("the string greather than two and having end and start element same are    "+str(n))  