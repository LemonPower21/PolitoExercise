"""
11.1.2 Parole più frequenti. Estendere il programma dell’esercizio 11.1.1 in modo che visualizzi
solamente le 5 parole più frequenti nel file, senza considerare nel conteggio articoli, preposizioni e
congiunzioni. [P8.3]
"""
import operator
with open("file.txt","r") as f:
    righe = f.readlines()
    dict1 = dict()
    parole = []
    for riga in righe:
        parole = parole + (riga.rstrip('\n').split())
    listaproibita = ["ma","uno","una","il","lo","la","e","se","pero"]
    for word in parole:
        if word not in listaproibita:
            if word in dict1.keys():
                dict1[word] = dict1[word]+1
            else:
                dict1[word] = 1
    listacontrollo = []
    for k,v in dict1.items():
        dict2 = {
            "parola":k,
            "valore":v
        }
        listacontrollo.append(dict2)
    print(listacontrollo.sort(key=operator.itemgetter("valore")))
    listacontrollo.reverse()
    for x in range(0,5):
        print(listacontrollo[x])