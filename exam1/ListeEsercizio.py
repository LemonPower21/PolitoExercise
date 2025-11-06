import random
V = '24567JQK3A'
S = 'CQFP'
#Sopra potevo mettere la lista (Sarebbe utile quando un seme richiede 2 caratteri 10)
#Lista è modficabile 

#GENERO LA MIA LISTA (MAZZO)
l = []     
l2 = []
for v in V:
    for s in S:
        c = v + s
        l.append(c)

# MESCOLIAMO LE CARTE ()
while l:   #se =0 False altrimenti True
    x = random.randint(0,len(l)-1)
    carta = l[x]
    l2.append(carta)
    l.pop(x)   #PIU' EFFICIENTE QUANDO SO DOVE SI TROVA LA POSIZIONE DELL'ELEMENTO 
print(l2)
print(l)


#LISTE IN BOOLEANO SONO UTTE VERE TRANNE LISTA VUOTA!!! uso lista nelle condizioni

# Potevo usare Shuffle

#MESCOLO ALGORITMO 2
l2 = []
for v in V:
    for s in S:
        c = v + s
        l.append(c)

c = 0
while len(l2)<len(l):
    c = c + 1
    x = random.randint(0,len(l)-1)
    if(l[x] in l2):
        continue
    l2.append(l[x])
print(c)

l = "Ciao"
print(bool(l))