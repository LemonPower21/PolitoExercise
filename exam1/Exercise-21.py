x1 = int(input())
x2 = int(input())
x3 = int(input())
if(x1<x2 and x2<x3):
    print("Strettamente crescente")
if(x3<x2 and x2<x1):
    print("Strettamente decrescente")
else:
    print("Non definibili ne crescenti ne decrescenti")
