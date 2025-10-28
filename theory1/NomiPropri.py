import string
n = int(input("Inserire un numero di stringhe: "))
for c in range(0,n):
    s = input()
    for i in range(0,len(s)):
        if(s[i].isupper()):   #CONTROLLO CHE LETTERA SIA MAIUSCOLA
            if(i==0 or s[i-1].isspace() or s[i-1] in string.punctuation): # SE I==0 o LE PRECEDENTI SONO SPAZIO O VIRGOLA ALLORA ENTRO
                j = i + 1
            if j<len(s) and s[j].islower() and s[j] not in string.punctuation: #SE NON VADO OUT-OF-BOUND E LA LETTERA SUCCESSIVA E' MINUSCOLA ALLORA ENTRO
                while j<len(s) and s[j].islower(): #SE NON VADO OUT-OF-BOUND E SONO MINUSCOLE CONTINUO 
                    j += 1
                if j == len(s) or s[j].isspace() or s[j] in string.punctuation: #SE ARRIVO ALLA FINE O TROVO SPAZIO O UNA LETTERA  MI FERMO E FACCIO SLICING
                    print(s[i:j])