import urllib.request,urllib.parse,urllib.error
import json
serviceurl='http://maps.googleapis.com/maps/api/geocode/json?'
print("....This program will convert any address to latitude and longitude co-ordinates.....")
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
	lt=js["results"][0]["geometry"]["location"]["lat"]
	ln=js["results"][0]["geometry"]["location"]["lng"]
	location=js["results"][0]["formatted_address"]
	print('Latitude',lt)
	print('Longitude',ln)
	print('Location',location)



