with open("bad.txt","r") as f:
    set1 = set()
    x = f.readlines()
    for riga in x:
        v =riga.rstrip('\n')
        for l in range(len(v)):
            set1.add(v[:l+1])
    print(set1)

with open("testo.txt","r") as f2:
    lrighe = f2.readlines()
    lriga = []
    for riga in lrighe:
        lriga.append(riga.rstrip().split(" "))
    for luriga in lriga:
        for i,word in enumerate(luriga):
            if word in  set1:
                luriga[i] = "*"*len(word)                 
    print(lriga)

with open("scrivicens.txt","w") as f3:
    for riga in lriga:
        for word in riga:
            parola = "".join(word)
            f3.write(parola+" ")
        f3.write('\n')