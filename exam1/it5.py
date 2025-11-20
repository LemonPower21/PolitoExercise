dizionario = ['casa', 'cane', 'gatto', 'topo', 'mela', 'pera', 
              'uva', 'ciccia', 'cicoria', 'cicogna', 'ciclamino']
parola = 'ciccio'
for i in dizionario:
    if(i==parola):
        print(f"Parola {parola} trovata nel dizionario")
    elif(len(parola)==len(i)):
        c=0
        for ind,letter in enumerate(parola):
            if(letter == i[ind]):
                pass
            else:
                c = c+1
        if(c==1):
            print(f"La parola simile nel dizionario è {i}")
if(c!=1 and c!=0):
    print("Parola errata: non trovata nel dizionario")
                