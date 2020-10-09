import xml.etree.ElementTree as ET 
data='''<users>
       <user>
       <name>Gaurav</name>
       <age type='integer'>20</age>
       <number type='intl'>100</number>
       <email hide="yes"/>
       </user>
       <user>
       <name>Arman</name>
       <age type='integer'>6</age>
       <number type='intl'>105</number>
       <email hide="yes"/>
       </user>
      </users>'''
stuff=ET.fromstring(data)
x=stuff.findall('user')
print('No of users:',len(x))
for y in x:
    print('Name:',y.find('name').text)
    print('Age:',y.find('age').text)
    print('Number:',y.find('number').text)
    print('Attribute:',y.find('email').get('hide'))
