fname=input('Enter the file name:')
fh=open(fname)
z=[]
counts=dict()
for line in fh :
	line.rstrip()
	if ((line.startswith("From")) and len(line.split()) >2):
		print(line)
		y=line.split()
		dfg=y.split(":")
		z.append(dfg[0])

for mn in z:
   counts[mn]= counts.get(mn,0) + 1


for bn in z:
	print(bn,z[bn])