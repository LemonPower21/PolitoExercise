def main():
    s = input("Inserire testo: ")
    count = countvocals(s)
    print(f"Ci sono {count} vocali in '{s}'")

def countvocals(stringa):
    c=0
    vocmin = 'aeiou'
    vocmax = 'AEIOU'
    for letter in stringa:
        if(letter in vocmin or letter in vocmax):
            c +=1
    return c

if __name__ == '__main__':
    main()