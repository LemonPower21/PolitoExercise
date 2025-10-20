import random
x = random.randint(1,10)
a = int(input("Inserire e indovinare il numero: "))
while(a != x ):
    a = int(input("Inserire e indovinare il numero: "))
print(f"Hai indovinato il numero è {a}")
