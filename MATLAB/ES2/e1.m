A =[66,-78,27;-78,93,-36;27,-36,45]
B = [1,-2,3;4,-5,6;-7,8,0]
 Z = eig(B)
[X,D] = eig(A)
raggiospettrale = max(abs(eig(B)))


%solo la A (DEFINITA POSITIVA E SIMMETRICA)