lungadna = input()
corta = input()

esiste = lungadna.find(corta)
if( esiste != -1):
    print(f"La stringa corta esiste in quella lunga e parte dall'indice {esiste} e può essere contenuta {lungadna.count(corta)}")
else:
    print("La stringa corta non esiste ")