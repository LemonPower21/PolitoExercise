targhe = ['AB123CD', 'EE123CD', 'AB123CE', 'AB123CO', 'AB123CI', 'AB123CQ', 'ab123fg', 'AB123', 'AB888EE']

nonammesso = ['I','O','Q']
boolv = []
targhebuone = []

for i in range(0,len(targhe)):
    b= True
    if len(targhe[i])==7 and targhe[i][2:6].isupper() and targhe[i][:2]!='EE':
        for e in nonammesso:
            if(e in targhe[i]):
                b= False
                boolv.append(b)
                break
        if(b):
            boolv.append(b)  
            targhebuone.append(targhe[i])
    else:
        b=False
        boolv.append(b)
print(boolv)
print(targhebuone)