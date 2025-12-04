def main():
    r = int(input("Inserire reddito: "))
    f = int(input("Inserire figli: "))
    x = ong(r,f)
    print(f"La famiglia con {f} figli e {r} reddito ha {x} sussidio.")
def ong(reddito,figli):
    if( 30000<=reddito<=40000 and figli>=3):
        return 1000*figli
    if( 20000<=reddito<30000 and figli>=2):
        return 1500*figli
    else:
        return 200*figli
    
if __name__ == '__main__':
    main()