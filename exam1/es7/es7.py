with open("maze.txt","r") as f:
    dictionaire = set()
    righe = f.readlines()
    for i,riga in enumerate(righe):
        righe[i] =  riga.rstrip()
    dict1 = {}
    for i,riga in enumerate(righe):
        for j,char in enumerate(riga):
            if(char == ' '):
                if(i==0):
                    if(j==0):
                        dict1[(i,j)] = {(i+1,j),(i,j+1)}    
                    elif(j==len(riga)):
                        dict1[(i,j)] = {(i+1,j),(i,j-1)}                        
                    else:
                        dict1[(i,j)] = {(i+1,j),(i,j+1),(i,j-1)}
                elif i==len(righe)-1:
                    if(j==0):
                        dict1[(i,j)] = {(i-1,j),(i-1,j+1)}    
                    elif(j==len(riga)):
                        dict1[(i,j)] = {(i-1,j),(i,j-1)}                        
                    else:
                        dict1[(i,j)] = {(i-1,j),(i,j+1),(i-1,j-1)}
                else:
                        dict1[(i,j)] = {(i-1,j),(i,j+1),(i,j-1),(i+1,j)}                    
                dictionaire.add((i,j))
print(dictionaire)
print(dict1)