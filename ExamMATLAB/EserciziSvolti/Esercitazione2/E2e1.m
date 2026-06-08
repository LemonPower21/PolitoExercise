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



A= zeros(100);
for i=1:100
    for j=1:100
        A(i,j) = max(i,j);
    end
end

b= sum(A,2)

[Lt,Ut] = elleu(A,100)
[L,U,P] = lu(A)

%LUx = PB
xsol_elleu = Ut\(Lt\b)
xsol_lu = U\(L\(P*b))
xsol_vera = ones(100,1)

% 6.392075757588600e-11
errrelELLEU = norm(xsol_elleu-xsol_vera,inf)/norm(xsol_vera,inf)

errrelLU = norm(xsol_lu-xsol_vera,inf)/norm(xsol_vera,inf)
%2.639666263348772e-12