"""
contiene soltanto lettere; OK
II. contiene soltanto lettere maiuscole; ok
III. contiene soltanto lettere minuscole; ok
IV. contiene soltanto cifre numeriche decimali; 
V. contiene soltanto lettere e cifre; OK
VI. inizia con una lettera maiuscola; OK
VII. termina con un punto. OK 

"""
s1 = input()
if(s1.isupper()):
    print("Contiene solo maiuscole")
if(s1.islower()):
    print("Contiene solo minuscole")
if(s1[0].isupper()):
    print("Contiene iniziale maiuscola")
if(s1[0].isalnum()):
    print("Contiene solo caratteri alfanumerici")
if(s1[len(s1)-1] == '.'):
    print("Termina con il punto")
if(s1.isalpha()):
    print("Contiene solo lettere")
if(s1.isnumeric()):
    x = int(s1)
    if(x>=0 and x<=9):
        print("E' una cifra decimale")

        
