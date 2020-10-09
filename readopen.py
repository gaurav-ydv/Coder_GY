import urllib.request,urllib.parse,urllib.error
fhand=urllib.request.urlopen('https://stackoverflow.com/questions/2018026/what-are-the-differences-between-the-urllib-urllib2-urllib3-and-requests-modul#:~:text=read()%20%23%20Returns%20an%20instance,urlopen()%20functions%20and%20requests.&text=urlopen(url)%20returns%20an%20instance').read()
x=urllib.request.urlopen('http://py4e-data.dr-chuck.net/comments_760609.xml')
print(x)
print(70*'*')
print(fhand)