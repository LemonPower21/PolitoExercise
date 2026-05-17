function [lambda_max,w,m] = Potenze(A,z,tol,m_max)
    %PUOI PASSARE Z CASUALE [1;2;3]
    w = z/norm(z);
    lambda = 0;
    for m = 1:m_max
        z = A*w;
        lambda_max = w'*z ;
        w = z/norm(z);
        if abs(lambda_max-lambda) <= tol*abs(lambda_max)
        break
        end
    end
    lambda = lambda_max;
end