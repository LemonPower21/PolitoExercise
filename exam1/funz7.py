import math

def main():
    print(diam(12))
    print(rsrame(100,12))
def diam(n):
    return(0.127*92**((36-n)/39))

def rsrame(l,n):
    d = diam(n)
    rsi = 2.82*10**-8
    return rsi*l/(math.pi*d*d)

if __name__ == '__main__':
    main()