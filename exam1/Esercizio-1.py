a = int(input())
day = int(input())
if (a == 1 or a ==2 or a==3):
    s = "Winter"
if (a == 4 or a ==5 or a==6):
    s = "Spring"
if (a == 7 or a ==8 or a==9):
    s = "Summer"
if (a == 10 or a == 11 or a== 12):
    s = "Fall"
if(a%3 ==0 and day>=21):
    if (s =="Winter"):
        print("Spring")
    if (s =="Spring"):
        print("Summer")
    if (s =="Summer"):
        print("Fall")
    if (s =="Fall"):
        print("Winter")
