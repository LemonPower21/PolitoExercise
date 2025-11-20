tabposti = [
    [10, 10, 10, 10, 10, 10, 10, 10, 10, 10 ],
    [10, 10, 10, 10, 10, 10, 10, 10, 10, 10 ],
    [10, 10, 10, 10, 10, 10, 30, 10, 10, 10 ],
    [10, 10, 10, 10, 10, 10, 20, 10, 10, 10 ],
    [10, 10, 10, 10, 10, 10, 10, 10, 10, 10 ],
    [10, 10, 10, 10, 10, 10, 10, 10, 10, 10 ],
    [10, 10, 10, 10, 10, 10, 10, 10, 10, 10 ],
    [10, 10, 10, 10, 10, 10, 10, 10, 10, 10 ],
    [10, 10, 10, 10, 10, 10, 10, 10, 10, 10 ],
    [10, 10, 10, 10, 10, 10, 10, 10, 10, 10 ],
    ]
a = 4

while int(a)<1 or int(a)>3:
    a = int(input("Inserire scelta 1)POSIZIONE 2)PREZZO 3)ESCI"))

if(a==1):
    b=100
    c=100
    occupied = True
    while b<0 or c<0 or b>=10 or c>=10 or occupied:
        b = int(input("Inserire posizione riga: "))
        c = int(input("Inserire posizione colonna: "))
        if(b<10 and b>=0 and c<10 and c>=0):
            if(tabposti[b][c]!=0):
                tabposti[b][c]=0
                occupied = False
if(a==2):
    occupied = False
    prezzo = 10
    for i in range(0,len(tabposti)):
        for j in range(0,len(tabposti[i])):
            if(prezzo==tabposti[i][j]):
                print(f" Hai occupato i posti riga {i} e colonna {j}")
                occupied = True
                tabposti[i][j]= 0
                break
        if(occupied):
            break
    if(not occupied):
        print("Errore non ci sono posti disponibili a quel prezzo")
if(a==3):
    print("Sei uscito dal programma")        
print(tabposti)
