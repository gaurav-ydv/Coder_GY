import re
fn=input("Enter file Name:")
fh=open(fn)
Sum=list()
a=list()
for line in fh:
	line.rstrip()
	a=re.findall('[0-9]+',line)
	Sum.extend(a)
sm=0
for x in Sum:
  sm=sm+int(x)
print(sm)
	


