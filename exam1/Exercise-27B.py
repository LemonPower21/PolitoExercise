import random
x = random.randint(1,10)
a = int(input("Inserire e indovinare il numero: "))
t=3 
if(a != x):
    t -=1
    print(f"Ti mancano {t} tentativi")

while(a != x and t>0):
    a = int(input("Inserire e indovinare il numero: "))
    if (a!=x):
        t -= 1
        print(f"Ti mancano {t} tentativi")
if(a==x):
    print(f"Hai indovinato il numero è {a}")
else:
    print("Hai Perso!")
