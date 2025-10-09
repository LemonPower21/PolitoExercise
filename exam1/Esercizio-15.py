matr = input()
x = matr[1:len(matr)]
num1 = int(x)

matr2 = input()
num2 = int(matr2[1:len(matr2)])

if(num1 > num2):
    print(f"s{num2} e s{num1}")
else:
    print(f"s{num1} e s{num2}")   