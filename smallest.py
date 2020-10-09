a=[123,45,678,56,3,6,-9,7777]
key=a[0]
for i in a:
    if i<key:
	    key=i
print(key)