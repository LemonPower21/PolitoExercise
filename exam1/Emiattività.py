import math
a0 = 1000
T = 6
t = 24
for i in range(0,t+1):
    nep = math.e
    lambdax = math.log(2)/T
    a = a0*(nep**(-lambdax*i))
    print(f'{a/a0} Al tempo {i}')