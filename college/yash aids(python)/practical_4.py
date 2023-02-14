def facto(a):
    if a>0:
        return a*facto(a-1)
    else:
        return 1


def sumofn(b):
    if b>0:
        return b+sumofn(b-1)
    else:
        return 0


ab=int(input("enter the number for factorial "))
x=facto(ab)
ba=int(input("enter the numvber for nth sum "))
y=sumofn(ba)
print("the factorial of number "+str(ab)+" is "+str(x))
print("the sum of n th number is "+str(ba)+" is "+str(y))