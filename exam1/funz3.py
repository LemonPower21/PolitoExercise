import math

def main():
    a = 10
    b = 10
    print(volsfera(a))
    print(volcill(a,b)) 
    print(volcon(a,b))
    print(arsfera(a))
    print(arcill(a,b)) 
    print(arcon(a,b))

def volsfera(r):
    return(4/3*math.pi*r**3)

def volcill(r,h):
    return(math.pi*r**2*h)

def volcon(r,h):
    return((math.pi*r**2*h)/3)

def arsfera(r):
    return(4*math.pi*r**2)

def arcill(r,h):
    return(math.pi*r*2*h) +(math.pi*2*r**2)

def arcon(r,h):
    return((math.pi*r*h)+(math.pi*r**2))

if __name__ == '__main__':
    main()