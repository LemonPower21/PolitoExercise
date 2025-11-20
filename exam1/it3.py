partenza = []
for i in range (1,101):
    partenza.append(i)
print(partenza)

for j in partenza:
    if j==1:
        print("Errore, algoritmo di Collatz termina")
    else:
        var = []
        while j!=1:
            var.append(j)
            if(j%2==0):
                j = int(j/2)
            else:
                j = (j*3)+1
        var.append(j)
        print(var)
        print()