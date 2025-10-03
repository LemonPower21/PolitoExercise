i = 2
pi = 0
den = 1
while(i<1200):
    if (i%2 == 0):
        pi = pi + 1/den
    else:
        pi = pi - 1/den
    den = den + 2
    i = i + 1
print(4*pi)