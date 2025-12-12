"""11.1.1 Contare le parole. Scrivere un programma che conti le occorrenze di ciascuna parola presente
in un file di testo, il cui nome è inserito in input. Si assuma che il file contenga solo caratteri alfabetici
o di spaziatura (come ad esempio il file input.txt). Il programma deve visualizzare tutte le parole
presenti, con a fianco il numero di occorrenze di ciascuna. [P8.2]"""

with open("file.txt","r") as f:
    righe = f.readlines()
    dict1 = dict()
    parole = []
    for riga in righe:
        parole = parole + (riga.rstrip('\n').split())
    
    for word in parole:
        if word in dict1.keys():
            dict1[word] = dict1[word]+1
        else:
            dict1[word] = 1
print(dict1)