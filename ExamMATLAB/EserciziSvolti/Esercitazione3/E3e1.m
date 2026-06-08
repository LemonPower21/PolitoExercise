function [m,lambda] = potenze(mmax,toll,z,A)
%NORMALIZZO
w = z/norm(z);
lambda=0;
for m=1:mmax
    %CALCOLO Z(m+1)
    z = A*w;
    %CALCOLO L = w(m)'*z(m+1)
    lambdamax = w'*z;

    if(abs(lambda-lambdamax)<=toll*abs(lambdamax))
        break
    end
    w = z/norm(z);
    lambda = lambdamax;
end
end

z = [1 2 3 ]';
toll = 1e-10;
A1 = [1 2 0; 1 0 0 ; 0 1 0];
A2 = [0.1 3.8 0; 1 0 0;0 1 0];
A3 = [0 -1 0; 1 0 0 ; 0 1 0];
it = 100;

[m1 ,l1] = potenze(it,toll,z,A1)
%ARRIVA ALLA FINE: BASSA CONVERGENZA DOVUTA A RAPPORTO AUTOV
[m2, l2] = potenze(it,toll,z,A2)
%NON CONVERGE AFFATTO SIAMO NEI COMPLESSI
[m3,l3] = potenze(it,toll,z,A3)

eig(A1)
eig(A2)
eig(A3)