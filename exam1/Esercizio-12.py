s1 = "Monetino"
if(len(s1)>6):
    print(s1[0:3]+"..."+s1[len(s1)-3:len(s1)])
if(len(s1)>3 and len(s1)<=6):
    print(s1)
if(len(s1)<=3):
    print("Stringa troppo corta")