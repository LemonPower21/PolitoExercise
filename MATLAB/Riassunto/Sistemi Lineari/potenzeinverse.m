function [lambdap,w,m] = potenzeinverse(A,p,z,toll,mmax)
    n= size(A);
    %ESEGUO PRIMO CALCOLO
    w = z/norm(z);
    %ASSEGNO LAMBDA PARI ALLA APPROSSIMAZIONE
    lambda = p;
    [L,U,P] = lu(A-p*eye(n));
    %CICLO FINCHE NON RAGGIUNGO TOLLERANZA O FINISCO ITERAZ.
    for i=1:mmax
        %RISOLVO (A-pI)x = (LAMBDA - p)x APPLICANDO PALU
        y = L\(P*w)
        z = U\y

        % ricalcolo lambda usando definizione (lambda = p +1/(mu))
        lambdap = p +(1/(w'*z))
        w = z/norm(z)
        if(abs(lambdap-lambda)<=    toll*abs(lambdap))
            break;
        end
        lambda = lambdap
    end
end 