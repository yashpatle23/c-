#a
array_num = [1,3,5,7,9]
for i in array_num:
    print(i)
print("Access first three items individually")
print(array_num[0])
print(array_num[1])
print(array_num[2])
print("\n\n")
#b
print("array after appending with 11")
array_num.append(11)
print(array_num)
print("\n\n")
#c
print("array after reversing the array ")
array_num.reverse()
print(array_num)
print("\n\n")
#d
print("array after insertion of element in 2 postion")
array_num.insert(1,8)
print(array_num)
print("\n\n")
#e
array=[
    [4,7,86],
    [4,87,9],
    [10,54,6]
]
print("squre array in wrap form")
for x in array:
    for y in x:
        print(y,end=" ")
    print()
print("array in spiral form")
for x in array:
    for y in x:
        print(y,end=" ")