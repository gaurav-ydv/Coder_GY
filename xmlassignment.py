import urllib.request,urllib.parse,urllib.error
import xml.etree.ElementTree as ET 
#url=input('')
fhand=urllib.request.urlopen('http://py4e-data.dr-chuck.net/comments_760609.xml').read()
tree=ET.fromstring(fhand)
x=tree.findall('comments/comment')
sm=0
for item in x:
	sm=sm+int(item.find('count').text)
print(sm)