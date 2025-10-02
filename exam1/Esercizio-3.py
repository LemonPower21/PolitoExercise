# Dimensioni stanza rettangolare
bpiastr = 10
hpiastr = 10

Apiastr = bpiastr*hpiastr

b = int(input())
h = int(input())
if(b%10==0 and h%10==0):
    print("Rispetta criteri")
    Astanza = b*h
    npiastrtot = Astanza/Apiastr
    print("Npiastrelle: "+str(npiastrtot))
    if(npiastrtot%2 == 0):
        print("Numero uguale di piastrelle")
    else:
        print("Numero diverse di piastrelle")
else:
    print("Non rispetta criteri")
