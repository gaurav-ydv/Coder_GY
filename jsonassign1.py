import urllib.request,urllib.parse,urllib.error
import json
#url=input('')
fhand=urllib.request.urlopen('http://py4e-data.dr-chuck.net/comments_760610.json').read()
x=json.loads(fhand)
sm=0
y=len(x["comments"])
for i in range(y):
	sm=sm+int(x["comments"][i]["count"])
print(sm)