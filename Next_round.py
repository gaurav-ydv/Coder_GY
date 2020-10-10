f=input("").split()
n=int(f[0])
k=int(f[1])
sc=input("").split()
temp=0
val=int(sc[k-1])
for i in sc:
	if int(i)>=val and int(i)>0:
		temp=temp+1
	else: continue
print(temp)