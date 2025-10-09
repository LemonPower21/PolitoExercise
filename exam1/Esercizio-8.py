r1 = float(input())
r2 = float(input())
r3 = float(input())

# 1/rtot = 1/r1 + 1/r2

rtot = r1 + (1/(1/r2 + 1/r3))

print(f"{rtot:.2f}")