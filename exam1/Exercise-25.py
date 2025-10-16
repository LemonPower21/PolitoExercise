a = float(input())
if(a<10):
    print("Sconto = 0%")
if(a>=10 and a<=60):
    print("Sconto 8%")
if(a>60 and a<=150):
    print("Sconto 10%")
if(a>150 and a<=210):
    print("Sconto 12%")
if(a>210):
    print("Sconto 15%")