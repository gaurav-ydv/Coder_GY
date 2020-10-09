fn="x.txt"
fo="July6.txt"
fhand=open(fn)

for line in fhand:
    if '/' in line or line.count(":")==1:
        x=line.rstrip()
        fon=open(fo,"a")
        fon.write(line)
        fon.close()
    else:continue
