A = zeros(100);
for i=1:100
    for j=1:100
        A(i,j) = i*max(i,j);
    end
end

[L,U,P] = lu(A)

% PA=L*U quindi A-1 = U-1*L-1*P

AinvMat = inv(A)
Ainv = inv(U)*inv(L)*P

AinvMat(1,1)
Ainv(1,1)