l1 = [1,2,3,4]
l2 = [1,2,3,5,4]
if(len(l1)==len(l2)):
    b = True
    for i in range (0,len(l1)):
        if(l1[i] in l2):
            pass
        else:
            print("Liste diverse")
            break