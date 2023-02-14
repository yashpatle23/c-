count=[45,65,5,4,35]
maax=count[0]
for i in range(4):
	if maax<count[i+1]:
		maax=count[i+1]
print(maax)