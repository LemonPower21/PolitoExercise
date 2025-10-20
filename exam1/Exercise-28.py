S = input("Inserire parola segreta: ")
t = 3
s = input("Indovina la parola segreta: ")
if(s != S):
    t -= 1
    print("Sbagliato! Tentativi rimasti:", t)
while(s!=S and t>0):
    s = input("Indovina la parola segreta: ")
    t -=1
    print("Sbagliato! Tentativi rimasti:", t)
if( s==S):
    print("Parola esatta!")
else:
    print("Hai fallito")