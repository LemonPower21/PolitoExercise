a = int(input())
f = False
for x in range(2,a):
    for y in range(2,x):
        if(x%y==0):
            f = True
    if(not f):
        print(f'{x} è primo')
    f = False