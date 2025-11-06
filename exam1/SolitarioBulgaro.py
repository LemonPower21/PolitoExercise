import random
c = 45
l= []
splicer = random.randint(3,5)
t = 0

while t<c:     #GENERIAMO NUMERI FINCHE' T=C
    genpile = random.randint(1,c-t)   #CARTE DELLA PILA
    t = t + genpile   #SOMMIAMO RANDOM GENERATO AL TOTALE DELLE CARTE
    l.append(genpile) #AGGIUNGIAMO LA PILA
l.sort() #ORDINIAMO LA PILA
print(l)

while l!=[1,2,3,4,5,6,7,8,9]:  #DIMOSTRAZIONE

    for i in range (0,len(l)):  #SOTTRAIAMO OGNI CARTA AD OGNI PILA
        l[i]=l[i]-1

    l.append(len(l))     # AGGIUNGIAMO N CARTE QUANTO ERA LUNA LA PILA

    while(0 in l): #SE ABBIAMO ZERI LI ELIMINIAMO (L[I]=1 -1 DA ZERO)
        l.remove(0)
        
    l.sort()   #RIORDINIAMO
print(l)