zeri = [-84.71, -17.58, 6.85, 1.34, -91.5, 78.47, -62.66, -6.13]
zeri.sort()
for i in range(1,len(zeri)-1):
    print(f"Il valore {zeri[i]} e' comprerso tra {zeri[i-1]} e {zeri[i+1]}")