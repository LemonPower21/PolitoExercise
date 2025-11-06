def toglimin(l):
    if(len(l)==0):
        print("Lista vuota")
    else:
        min = l[0]
        for i in range(0,len(l)):
            if(l[i]<min):
                min=l[i]
        return min
la = [-10,1,2,3]
print(toglimin(la))
