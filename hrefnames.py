import urllib.request,urllib.parse,urllib.error
from bs4 import BeautifulSoup
import re
url=input(' ')
counts=int(input(' '))
position=int(input(' '))
html=urllib.request.urlopen(url).read()
soup=BeautifulSoup(html,'html.parser')
tags=soup('a')

for x in range(1,counts+1):
    link=tags[position-1].get('href',None)
    html=urllib.request.urlopen(link).read()
    soup=BeautifulSoup(html,'html.parser')
    tags=soup('a')
print(link[39:-5])