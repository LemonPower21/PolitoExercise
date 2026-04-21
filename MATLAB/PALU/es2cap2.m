clear all
clc
close all

for i=1:100
    for j=1:100
        A(i,j) = i*(max(i,j));
    end
end
[L,U,P] = lu(A)
%PA = LU
%(PA)^-1 = (LU)^-1
%A-1*P-1=U-1L-1
%A-1 = U-1L-1P
Linv = inv(L);
Uinv = inv(U);

Ainv = Uinv*Linv*P;
Ainvmatlab = inv(A);

err = (norm(Ainv)-norm(Ainvmatlab))/norm(Ainvmatlab)
%ERRORE = 0