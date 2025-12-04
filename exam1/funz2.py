def main():
    s = input("Inserire testo: ")
    count = countstring(s)
    print(f"Ci sono {count} parole in '{s}'")

def countstring(stringa):
    c=1
    for letter in stringa:
        if(letter == ' '):
            c +=1
    if(stringa==''):
        return 0
    else:
        return c

if __name__ == '__main__':
    main()