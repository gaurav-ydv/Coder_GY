str=input("").swapcase()
x=str.split()
y=dict()
z=0
for i in x:
	y[i]=z+1
	z=z+1
temp=list()
for a,b in y.items():
	temp.append((b,a))

tmp=sorted(temp,reverse=True)
l=""
for i,j in tmp:
	l=l+" "+j
print(l)

