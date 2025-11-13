# F = -kx
# F = ma
# a = -kx/m
# v = at
# s = vt
k = 10
x = 0.5
v = 0
m = 1
t = 0.01
a = -(k*x)/m

while t<10:
    v = a*t
    x = v*t
    print(v,x)
    t = t +0.01