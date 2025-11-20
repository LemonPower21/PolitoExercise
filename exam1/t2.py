avi = ['Giovanni', 'Maria', 'Luigi', 'Anna', 'Paolo', 'Giulia', 'Carlo', 'Rosa']
v  = ['a','e','i','o','u']
fin = []

for i in avi:
    for j in avi:
        if(len(i)+len(j)<=10):
            if(i[len(i)-1] in v):
                v2 = i[:len(i)-1]
            if(v2[len(v2)-2] not in v and v2[len(v2)-1] not in v  ):
                v2  = v2[0:len(v2)-1]
            fin.append(v2+j)
print(fin)