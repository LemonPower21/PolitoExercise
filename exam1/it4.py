import math
x = [-84.71, -17.58, 6.85, 1.34, -91.5, 78.47, -62.66, -6.13]
y = [54.55, -61.9, 78.31, 37.2, -34.29, -77.22, 68.04, 41.15]
r = []

for i in range(0,len(x)):
    for j in range(i,len(x)-1):
        distanza = math.sqrt((x[i]-x[j+1])**2 +(y[i]-y[j+1])**2)
        r.append(distanza)
        dmin = min(r)
        dmax = max(r)
print(r,dmin,dmax)