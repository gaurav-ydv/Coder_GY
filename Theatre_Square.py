h=input("").split()
n=int(h[0])
m=int(h[1])
a=int(h[2])
def fn(a,b):
    if a%b==0:
       return int(a/b)
    if a%b!=0:
       return int(a/b)+1
if n*m<=a*a:
    print("1")
elif n*m>a*a:
    print(fn(n,a)*fn(m,a))
    






    