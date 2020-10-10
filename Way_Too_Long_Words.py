i=int(input(" "))
a=list()
for x in range(0,i):
	y=input("")
	a.append(y)
for y in a:
	if len(y)>10:
		l=len(y)
		print(y[0]+str(l-2)+y[l-1])
	else: print(y)