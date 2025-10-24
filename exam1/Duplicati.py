dupl = ''
s2 = ''
s3 = ''
i = 0
while True:
    s = input()
    if s == '':
        break
    if(s.isnumeric()):
        s2 = s2 + str(s)
    if(i!=0):
        if(s2[i-1]==s2[i]):
            b = True
        if(s2[i-1]!=s2[i] and b):
            print(f"Ripetizione {s2[i-1]}")
            s3 = s3 + s2[i-1]
            b = False
    i += 1

print(s3)