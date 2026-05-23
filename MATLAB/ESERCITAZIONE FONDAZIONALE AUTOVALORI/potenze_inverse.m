function [lambda_p,w,m] = potenze_inverse(A,p,z,toll,m_max)
n = size(A);
w = z/norm(z);
lambda_p(1) = p;
[L,U,P] = lu(A-p*eye(n));
for m = 1:m_max
    y = L\(P*w);
    z = U\y;
    lambda_p(m+1) = p+1/(w'*z);
    w = z/norm(z);
    if abs(lambda_p(m+1)-lambda_p(m)) <= toll*abs(lambda_p(m+1))
       break
    end
end 