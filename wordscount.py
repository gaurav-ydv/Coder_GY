#fn=input(" Enter the File Name:")
fhand=open("July6.txt")
words=list()
lines=list()
sm=0
y=0
for line in fhand:
    y=y+1
    lines.append(line)
print(y)
for i in range(y):
    if (i+1)%3==0:continue
    else:
        words.append(lines[i])
print(words)

#for word in words:
    #sm=sm+1
#print('total words:',sm)