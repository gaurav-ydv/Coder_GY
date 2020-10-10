i=int(input(""))
a=list()
m=0
for x in range(0,i):
	y=input("")
	a.append(y)

for x in a:
	if "++" in x:
		m=m+1
	elif "--" in x:
		m=m-1
print(m)
