import urllib.request,urllib.parse,urllib.error
fhand=urllib.request.urlopen("http://py4e-data.dr-chuck.net/comments_760607.html")
import re
lst=list()
a=list()
sm=0
for line in fhand:
    a=line.decode()
    if a.startswith('<tr>'):
        b=re.findall('[0-9]+',a)
        lst.extend(b)
    else:continue

for x in lst:
    sm=sm+int(x)
print(sm)