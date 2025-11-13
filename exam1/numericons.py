righe = int(input())
col = int(input())
tab = []

for x in range(0,righe):
    tab.append([0]*(col))
print(tab)

print()
#celle pari sia in x che in y= 1
for r in range(0,len(tab)):
    for c in range(0,len(tab[r])):
        if(r%2==0 and c%2 == 0):
            tab[r][c]=1
print(tab)


#scacchiera
print()
b = True
for r in range(0,len(tab)):
    if(r%2!=0):
        b= not(b)
        for c in range(0,len(tab[r])):
            if b:
                tab[r][c] = 1
                b = False
            else:
                b = True
    else:
        b = True
print(tab)

print()

#colonna sinistra e destra
for r in range(0,len(tab)):
    for c in range(0,len(tab[r])):
        if(c==0 or c==len(tab[r])-1):
            tab[r][c]=1
print(tab)

s = 0
for r in range(0,len(tab)):
    for c in range(0,len(tab[r])):
        s = s + tab[r][c]
print(s)