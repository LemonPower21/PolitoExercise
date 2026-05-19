function [lambda_calcolato,w,m] = potenzeinverse(A,p,z,toll,m_max)
    n=size(A)
    w = z/norm(z);
    lambda = p;
    [L,U,P] = lu(A-p*eye(n));
    for m=1:m_max
        y = L\(P*w)
        z = U\y
        lambda_calcolato = p+1/(w'*z);
        w = z/norm(z)
     if(abs(lambda_calcolato-lambda)<= toll*abs(lambda_calcolato))
        break
     end
    lambda = lambda_calcolato;
    end
end