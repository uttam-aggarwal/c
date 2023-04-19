a="helloworld"
b=96
c=''
for i in a:
    for j in range(0,26):
        d=chr(b+1)
        print(c+d)
        b=b+1
        if d==i:
            c=c+d
            b=96
            break