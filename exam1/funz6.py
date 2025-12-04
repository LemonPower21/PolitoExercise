def romtolist(romstring):
    tot = []
    ROMANI = ['I','V','X','L','C','D','M']
    VALOR = ['1','5','10','50','100','500','1000']
    for l in romstring:
        if l in ROMANI:
            i = ROMANI.index(l)
            tot.append(VALOR[i])
    return tot

def calc(romlist):
    tot = 0
    while (len(romlist) > 0):
        if(len(romlist) == 1 or int(romlist[0]) >= int(romlist[1])):
            tot = tot + int(romlist[0])
            romlist = romlist[1:]
        else:
            diff = int(romlist[1]) - int(romlist[0])
            tot += diff
            romlist= romlist[2:] 
    return tot

print(romtolist('IXI'))
print(calc(romtolist('XX')))