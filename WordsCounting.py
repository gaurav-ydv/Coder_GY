fname=input('Enter the file name:')
fh=open(fname)
counts=dict()
for line in fh :
     x=line.rstrip()
     y=x.split()
     for mn in y:
        counts[mn]= counts.get(mn,0) + 1

#for gh in counts :
    #print(gh,":",counts[gh])
val=0
for gh in counts :
    if counts[gh] > val:
        val=counts[gh]
        key=gh
    else: continue
print(key,val)