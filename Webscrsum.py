import urllib.request,urllib.parse,urllib.error
from bs4 import BeautifulSoup
url=input(' ')
html=urllib.request.urlopen(url).read()
soup=BeautifulSoup(html,'html.parser')
tags=soup('span')
sm=0
for tag in tags:
      sm=sm+int(tag.text)	
print(sm)