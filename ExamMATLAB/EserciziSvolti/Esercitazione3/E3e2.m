function [m,lambda,v] = potenzeinverse(mmax,toll,z,p,A)
%NORMALIZZO
n=size(A)
w = z/norm(z);
lambda=p;
[L,U,P] = lu(A-p*eye(n))
for m=1:mmax
    y= L\(P*w)
    z = U\y;
    %CALCOLO L = w(m)'*z(m+1)
    lambdap = p + 1/(w'*z)
    v(m) = lambdap
    if(abs(lambda-lambdap)<=toll*abs(lambdap))
        break
    end
    w = z/norm(z);
    lambda = lambdap;
end
end

A1 = [1 -2 0; 0 2 0; 1 1 3]
A2 = [0.5 -2 0;0 2 0; 1 1 3]
A3 = [0 -2 0;0 1 0;1 1 3]
p = 0.5
z = [1 1 1]'
[m1,lambda1,v1] =potenzeinverse(100,1e-10,z,p,A1);
[m2,lambda2,v2] =potenzeinverse(100,1e-10,z,p,A2);
[m3,lambda3,v3] =potenzeinverse(100,1e-10,z,p,A3);

plot(v1)
figure
plot(v2)
figure
plot(v3)

%CASO1: Converge a v1 dopo 22 iterazioni
lambda1
m1

%ESSENDO 0.5 autovalore facendo A-pI diventa singolare (NON INVERTIFBILE) si blocca in quanto matrice non è invertibile
lambda2

%CONTINUA AD OSCILLARE TRA 0 E 1 (poichè 0.5 è vicino ad entrambi)
lambda3