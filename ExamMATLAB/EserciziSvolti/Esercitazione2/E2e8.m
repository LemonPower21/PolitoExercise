A = [
    3 1 2 4;
-1 0 7 9;
0 1 2 4;
2 4 1 1]

function [L,U] = elleu(A,n)
for k=1:n-1
    for i=k+1:n
        A(i,k)=A(i,k)/A(k,k);
        for j=k+1:n
        A(i,j) = A(i,j) -A(i,k)*A(k,j);
        end
    end
end
L = tril(A,-1)+ eye(n);
U = triu(A);
end


[L,U] = elleu(A,4);
%MOLTIPLICATORE 32 SENZA PIVOTING
L(3,2)

[L1,U1,P] = lu(A);
L1(3,2)

L(3,2)*L1(3,2)