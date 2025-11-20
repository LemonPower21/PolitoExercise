nomi = ["Mario","Luigi","Giovanni"]
rovescio = []
for s in nomi:
    s =  s[::-1]
    s = s.lower()
    s = s[0].upper() + s[1:]
    rovescio.append(s)
print(rovescio)