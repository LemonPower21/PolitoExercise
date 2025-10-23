a = input("Inserire stringa: ")
al = len(a)
for x in range(al,0,-1):
    print(a[x-1], end="")
print()
for x in range(al,0,-1):
    if(a[x-1].isupper()):
        print(a[x-1], end="")