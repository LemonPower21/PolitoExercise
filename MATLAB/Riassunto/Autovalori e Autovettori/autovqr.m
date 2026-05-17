function [d,m] = autovqr(A,tol,m_max)
% l'algoritmo `e applicabile se A ha autovalori distinti in modulo
for m = 1:m_max
    [Q,R] = qr(A);
    A = R*Q;
    %NORMA INFINITA DELLA MATRICE TRIL CI DICE SOMMA DELLE RIGHE DELLA TRIL
    %(SE TUTTO È ZERO SOTTO SIGNIFICA CHE E SIMMETRICA O HA TUTTI AUTOV
    %REALI)
    if norm(tril(A,-1),inf) <= tol
        break
    end
end
d = diag(A);