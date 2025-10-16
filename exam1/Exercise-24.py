lambdax = float(input())
if(lambdax>1e-1):
    print("Radio")
if(lambdax>1e-3 and lambdax<=1e-1):
    print("Micronde")
if(lambdax>7e-7 and lambdax<=1e-3):
    print("Infrarossi")
if(lambdax>4e-7 and lambdax<=7e-7):
    print("Visibile")
if(lambdax>1e-8 and lambdax<=4e-7):
    print("UV")
if(lambdax>1e-9 and lambdax<=1e-8):
    print("Raggi X")