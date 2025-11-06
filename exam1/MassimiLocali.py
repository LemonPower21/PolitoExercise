a = ' '
l = []
while a!='':
    a = input()
    if(a.isnumeric()):
        l.append(a)
    elif(a==''):
        print("Uscita dal ciclo")
    else:
        print("Errore inserire carattere valido")

if(len(l)==0):
    print("Lista vuota")
elif(len(l)==1):
    print("Unico punto", l[0])
else:
    for i in range (1,len(l)-1):
        if(l[i]>l[i-1] and l[i]>l[i+1]):
            print("Massimo locale: ", l[i])