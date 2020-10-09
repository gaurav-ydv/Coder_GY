import urllib.request,urllib.parse,urllib.error
import json
api_key = False
#if api_key is False:
    #api_key = 42
serviceurl = 'http://py4e-data.dr-chuck.net/json?key=42&'
#else :
    #serviceurl = 'https://maps.googleapis.com/maps/api/geocode/json?'
while True: 
    address=input('Enter the address')
    if len(address)<1:break
    url=serviceurl+urllib.parse.urlencode({'address':address})
    ur=urllib.request.urlopen(url)
    uh=ur.read().decode()
    print('Retrieved',len(uh),'characters')
    try:
        js=json.loads(uh)
    except:
        js=None

    if not js or 'status' not in js or js['status']!='ok':
        print('===failure===')
        print(uh)
        continue
    placeid=js["results"][0]["formatted_address"]["place_id"]
    print(placeid)
    



