def creaset(n):
    s1 = set()
    for i in range(2,n+1):
        s1.add(i)
    return s1

def rimuovimultipli(s1,n):
    for i in range(2,n+1):
        for e in list(s1):
            if(e!=i):
                if(e%i == 0):
                    s1.discard(e)
    return(s1)
print(rimuovimultipli(creaset(2000),2000))