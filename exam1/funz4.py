def main():
    print(compound(1,10,10000))

def compound(y,i,m):
    return ((1 + i/100)**y)*m

if __name__ == '__main__':
    main()