fn=input("Enter the file name:")
fh=open(fn)
count=0
for line in fh:
	x=line.rstrip()
	count= count+len(x.split())
print("Total number of words in file are:",count)