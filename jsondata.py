import json
data='''[
{  "name":"Gaurav",
    "Number":{
      "type":"intl",
      "number":"100"
       },
    "email":{
    "hide":"yes"
    }
    },
    {
    "name":"Arman",
    "Number":{
      "type":"intl",
      "number":"105"
       },
    "email":{
    "hide":"no"
    }
    }
    ]'''

x=json.loads(data)
for i in x:
    print('Name:',i["name"])
    print('Number:',i["Number"]["number"])
    print('Hide:',i["email"]["hide"])