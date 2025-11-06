a = ' '
l = []
s=0
while a!='':
    a = input()
    if(a==''):
        print("Uscita dal programma")
    elif(a.isnumeric()):
        l.append(int(a))
    else:
        print("Carattere non valido")

if(len(l)!=0):
    s = l[0]
    for i in range(1,len(l)):
        if(i%2==0):
            s=s+l[i]
        elif(i%2!=0):
            s=s-l[i]
        
    print(s)

for i in range(0,len(l)):
    if(i!=len(l)-1):
        if(i%2==0 or i==0):
            print(l[i], end=' - ')
        elif(i%2!=0):
            print(l[i], end=' + ')
    else:
        if(i%2==0 or i==0):
            print(l[i])
        elif(i%2!=0):
            print(l[i])
else:
    print("Lista vuota")