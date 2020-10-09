n=int(input(""))
op=list()
for i in range(n):
    q=input("")
    op.append(q)
lst=list()
def add(val):
    lst.append(val)
def remove(val):
     if val in lst:
        lst.remove(val)
def query(val):
    if val in lst:
        print("True")
    else: print("False")

def size():
    print(len(lst))


for a in op:
    x=a.split()[0]
    if len(a.split())>1:
         y=int(a.split()[1])
    if x=="query":
        query(y)
    elif x=="add":
        add(y)
    elif x=="remove":
        remove(y)
    else:size()