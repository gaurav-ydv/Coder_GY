sd=input("").split()
n=int(sd[0])
q=int(sd[1])
c=list()
rq=list()
for i in range(0,n):
     cl=input("").split()
     r=int(cl[0])
     b=int(cl[1])
     g=int(cl[2])
     c.append([r,b,g])
for i in range(0,q):
     cl=input("").split()
     r=int(cl[0])
     b=int(cl[1])
     g=int(cl[2])
     v=list()
     m=list()
     l=list()
     for x in c:
        if (r==x[0] and b>=x[1] and g>=x[2]) or ( r>=x[0] and b==x[1] and g>=x[2] ) or ( r>=x[0] and b>=x[1] and g==x[2]):
            v.append(x[0])
            m.append(x[1])
            l.append(x[2])
            
     if len(m)>0 and len(l)>0 and max(m)==b and max(l)==g:
        rq.append("YES")
     else : rq.append("NO")
for x in rq:
    print(x)
        
     
