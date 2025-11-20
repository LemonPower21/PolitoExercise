s1 = input()
l = s1.split(':')

ltemp = list(l)
max = max(l)
min = min(l)

ltemp.remove(max)
ltemp.remove(min)
print(ltemp)

ltemp2 = list(l)
for i in range(0,len(ltemp2)):
    if(int(ltemp2[i])%2==0):
        print(ltemp2[i])

ltemp3 = list(l)
for i in range(0,len(ltemp2)):
    if(int(ltemp3[i])>=10 and int(ltemp3[i])<100):
        print(ltemp3[i])