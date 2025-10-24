value = input()
s = 0
if(value.isnumeric()):
    v = int(value)
    s = s + v
    max = v
    min = v
    print(f'La somma è: {s}')
    print(f"Il massimo {max}")
    print(f"Il minimo {min}")
while value!='':
    value = input()
    if(value.isnumeric()):
        v = int(value)
        s = s + v
        print(f'La somma è: {s}')
        if(v>max):
            max = v
        if(v<min):
            min = v
        print(f"Il massimo {max}")
        print(f"Il minimo {min}")
    else:
        print("Valore non valido")