n = 4;
I = eye(n)
colzero = zeros(n,1)
B = [I,colzero,colzero]
rone = ones(1,size(B,2))
C = [B;rone;rone]

inv(I)
rC = rank(C)
rCONTRO = rank(I)+1

det(C)