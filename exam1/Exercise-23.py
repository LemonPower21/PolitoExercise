r = int(input())
s = input().upper()
if(s == 'S'):
    if (r>0 and r<=8000):
        print(r*0.10)
    if (r>8000 and r<=32000):
        print(r*0.15 + 800)
    if (r>32000):
        print(r*0.25 + 4400)
if(s == 'C'):
    if (r>0 and r<=16000):
        print(r*0.10)
    if (r>16000 and r<=64000):
        print(r*0.15 + 1600)
    if (r>64000):
        print(r*0.25 + 8800)
        