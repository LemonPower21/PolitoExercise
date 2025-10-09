import math
PIG = math.pi
q1 = float(input())
q2 = float(input())
r = float(input())
eps = 8.85e-12

f = (q1*q2)/(4*PIG*eps*(r**2))
print(f)