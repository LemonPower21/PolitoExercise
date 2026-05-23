format long e
v = [1 1 1 1 1]'
for i=1:5
    for j=1:5
        A(i,j) = 2*i*j -3*(i+j);
    end
end


eig(A) %Avendo valori negativi non E SIMMETRICA DEFINITA POS
A*v  % V  non e' autovettore
% La matrice è diagonalizzabile+

dimKer = 5-rank(A)  %ESSENDO 3 ESISTE DIMENSIONE DELL'AUTOSPAZIO AVENTE 3 VETTORI L.I.
