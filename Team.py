n=int(input(""))
no=0
for i in range(n):
	x=input("").split()
	z=0
	for y in x:
		z=z+int(y)
	if z>1: no=no+1
print(no)