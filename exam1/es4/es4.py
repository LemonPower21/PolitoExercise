"""Un vettore sparso è una sequenza di numeri, la maggior parte dei quali è 0.
Un modo efficiente per memorizzare un vettore sparso è un dizionario, nel quale le chiavi sono le
posizioni in cui sono presenti i soli valori diversi da zero, e i valori sono i corrispondenti valori nella
sequenza. Per esempio, la sequenza 0 0 0 0 0 4 0 0 0 2 9 sarebbe rappresentata dal
dizionario {5:4, 9:2, 10:9}. Scrivere una funzione, sparse_array_sum(a, b), i cui
argomenti sono due dizionari di questo tipo, a e b. La funzione, senza modificare i dizionari passati
come argomenti, deve restituire il loro vettore somma come un vettore sparso, dove un valore nella
posizione i è la somma dei valori di a e b nelle rispettive posizioni i. [P8.22]
"""
vett1 = "000020202098"
vett2 = "000020202098"
dict1 = {}
for i,letter in enumerate(vett1):
    if letter !='0':
        dict1[i]= int(letter)
dict2 = {}
for i,letter in enumerate(vett2):
    if letter !='0':
        dict2[i]= int(letter)

def sommavettori(d1,d2):
    v1 = ''
    v2 = ''
    prec = 0
    for k,v in d1.items():
        v1 = v1 + (((k)-prec)*"0"+str(v))
        prec = k+1
    prec = 0
    for k,v in d2.items():
        v2 = v2 + (((k)-prec)*"0"+str(v))
        prec = k+1
    v3 = ''
    for i in range(min(len(v1),len(v2))):
        v3 = v3 + str(int(v2[i])+int(v1[i]))
    return v3
print(sommavettori(dict1,dict2))