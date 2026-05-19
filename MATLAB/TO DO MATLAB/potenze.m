function [lambda_approssimato,w,m] = potenze(A,z,m_max,toll)
    %CALCOLO NORMA DI w e assegno lambda=0
    w = z/norm(z);
    lambda = 0
    %INIZIO A FARE LE TRE FASI CALCOLO DI Z  e di LAMBDA APPROSSIMATO
    for m=1:m_max
        %Z(M+1)
        z = A*w;
        %AUTOVALORE APPROSSIMATO
        lambda_approssimato = w'*z;
        w = z/norm(z);
        %VERIFICO SE POSSO USCIRE
        if(abs(lambda-lambda_approssimato) <= toll*abs(lambda_approssimato))
            break
        end
        lambda = lambda_approssimato
    end
end