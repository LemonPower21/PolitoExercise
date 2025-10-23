stringa = input("Inserire stringa: ")
for letter in stringa:
    if(letter.isupper()):
        print(letter, end="")

print()
i = 0
while (i < len(stringa)):
    if(i%2 ==1 ):
        print(stringa[i], end="")
    i +=1

print()
print()
stringa = stringa.upper()
s2 = ''
i = 0
for letter in stringa:
    if(letter=='A' or letter=='E' or letter == 'I' or letter == 'O' or letter == 'U'):
        s2 = s2 + '_'
        print(f"La vocale {letter} è presente in posizione {i}")
    else:
        s2 = s2+stringa[i]
    i = i+1
print()
print()
print(s2)

c = 0
for x in stringa:
    if x.isnumeric():
        c=c+1
print(f"Ci sono {c} numeri")