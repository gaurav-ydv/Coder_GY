fname=input('Enter the file name:')
fh=open(fname)
z=[]
counts=dict()
for line in fh :
	line.rstrip()
	if ((line.startswith("From")) and len(line.split()) >2):
		print(line)
		y=line.split()
		z.append(y[1])

for mn in z:
   counts[mn]= counts.get(mn,0) + 1


val=0
for gh in counts :
	if counts[gh] > val:
		val=counts[gh]
		key=gh
	else: continue
print(key,val)