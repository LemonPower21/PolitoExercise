a = int(input("Inserisci lato: "))
for i in range(0,a):
    print("*"*a)
print()
for i in range(1,a):
    print(" "*(a-i),"*"*(i*2-1))
for i in range(a,0,-1):
    print(" "*(a-i),"*"*(i*2-1))