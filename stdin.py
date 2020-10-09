#x, y = map(int, input().split())
#print(x+y)
#x,y= input(""),input("")
from sys import stdin

sums = []

for i in stdin:

     # i = i.rstrip() 

     data = list(map(int, i.split()))

     sums.append(sum(data))

print(*sums,sep="\n")


