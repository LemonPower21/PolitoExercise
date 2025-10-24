stringa = 'ciao'
for i in range(1,len(stringa)+1):
    for j in range(0,len(stringa)-i+1):
        print(stringa[j:j+i])

##