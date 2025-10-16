votolettere = input().upper()
voto = ""
if ('A' in votolettere):
    voto = 4
elif ('B' in votolettere):
    voto = 3
elif ('C' in votolettere):
    voto = 2
elif ('D' in votolettere):
    voto = 1
elif ('F' in votolettere):
    voto = 0
else:
    print("Errore")
if('-' in votolettere and not('F' in votolettere) ):
    voto = voto - 0.3
elif('+' in votolettere and not('A' in votolettere)and not('F' in votolettere)):
    voto = voto + 0.3
print(voto)
