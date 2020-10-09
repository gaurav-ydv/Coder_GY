fn=input("Enter the file name:")
fh=open(fn)
dx=dict()
count=0
for line in fh:
	line.rstrip()
	x=line.split()
	for word in x:
		if word not in dx:
			dx[word]=1
		else :
			dx[word]=dx[word]+1




print(dx)