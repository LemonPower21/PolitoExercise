n = int(input("Inserire valore"))
l1 = []
l2 = []

for i in range(0,n):
    v = int(input("Inserire numero"))
    nat = input("Inserire nazione")
    l1.append(v)
    l2.append(nat)

for  i in range(0,len(l1)):
    l1[i] = abs(l1[i])

max = max(l1)

for i in range(0,len(l1)):
    if(l1[i]==max):
        print(l2[i] + '\t' + "*"*40)
    else:
        print( l2[i] + '\t' + "*"*(int((40*l1[i])/max)))