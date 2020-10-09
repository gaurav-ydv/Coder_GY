fn=input('Enter the file Name:')
fo=open(fn)
a=list()
b=dict()
count=0
ct=1
for line in fo:
    line.rstrip()
    count=count+1
    a.extend(line.split())
for word in a:
       ct=ct+1
       b[word]=b.get(word,0) +1 

print(sorted([(v,k) for k,v in b.items()]))
print('There are ',count,'lines in the file')
print('There are ',ct,'words in the file')

