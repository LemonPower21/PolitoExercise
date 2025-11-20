altezze = [ 21, 18, 30, 22, 20, 33 ]
r  = []
for i in range(0,len(altezze)):
    if i<len(altezze)-2:
        c=0
        j = 1
        while altezze[j+i]<=altezze[i]:
            c=c+1
            j = j+1
        r.append(c+1)
    else:
        r.append(len(altezze)-1-i)
print(r)