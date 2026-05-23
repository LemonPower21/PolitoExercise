A = [1,1,0,0;1,2,1,0;0,1,3,1;0,0,1,4];
B = A' +3*eye(4)
rank(B)^2
rank(B^2)
[X,D] = eig(B)
eig(B*B)