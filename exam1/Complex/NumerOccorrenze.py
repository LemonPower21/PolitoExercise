"""
08.1.3 Giocare a dadi. Scrivere un programma che generi una sequenza di 20 lanci casuali di dadi, li
memorizzi in una lista e visualizzi i valori generati, contrassegnando la serie di valori identici più
lunga con questa formattazione:
1 2 5 5 3 1 2 4 3 (2 2 2 2) 3 6 5 5 6 3 1
Se sono presenti più sequenze di valori identici di lunghezza
"""

import random
l = []
for i in range(0,20):
    l.append(random.randint(0,9))
max = 0
print(l)
start = 0
for i in range(1,len(l)-1):
    if l[i]==l[i-1]:
        b = True 
        j = i
        c = 0
        while b and j<len(l)-1:
            if(l[i]==l[j]):
                c=c+1
            else:
                b = False
            j = j+1
        if(c>max):
            max = c
            start = i-1
            end = start +1 +c
if start != 0 and end!=len(l):
    l.insert(start,'(')
    l.insert(end+1,')')
else:
    l.insert(start,'(')
    l.append(')')
print(l)