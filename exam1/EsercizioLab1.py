l = [1,2,3,4,5]
for i in range(0,len(l)):
    if(i==0):
        l[i]=(l[i]+l[i+1])/2
    elif(i==len(l)-1):
        l[i] = (l[i]+l[i-1])/2
    else:
        l[i] = (l[i-1]+l[i]+l[i+1])/3
print(l)