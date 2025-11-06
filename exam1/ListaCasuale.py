import random
l = []
for i in range(0,10):
    l.append(random.randint(0,100))

i=0
print(l)
print()
while(i<len(l)):
    if(i%2==0 or i == 0): #INDICE PARI 0,2,4,6
        print(l[i])
    i +=1

i=0
print()
while(i<len(l)):
    if(l[i]%2==0): #VALORE PARI 
        print(l[i])
    i +=1

print()
x = list(l)
x.reverse()
print(x)

print()
print(l[0],l[len(l)-1])
