A = zeros(100)
I = eye(100)
D = 10*ones(1,100)
diaginf = -5*ones(1,99)
diagsup = 5*ones(1,99)



B = A + diag(D) +diag(diaginf,-1)+ diag(diagsup,1)
R = chol(B)
%A = R'R ---> R'RA-1 = I 
Binv = R\(R'\I)
BinvMat = inv(B)
err_rel = norm(Binv - BinvMat)/norm(BinvMat)