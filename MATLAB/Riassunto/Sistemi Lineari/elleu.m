function [L,U] = elleu(A)
    n = size(A,1);
    %MI MUOVO FINO PENULTIMA COLONNA
    for k = 1:n-1
        %SCORRO SULLE RIGHE FINO ALLA FINE
        for i = k+1:n
            %CALCOLO MOLTIPLICATORE E LO SALVO DOVE DOVREBBE ESSERZI LO
            %ZERO
            A(i,k) = A(i,k)/A(k,k);
            %PER OGNI RIGA I-ESIMA SALVO IL  VALORE DOVUTO ALLA
            %SOSTITUZIONE
            for j = k+1:n
                % R = R -molt*R
                A(i,j) = A(i,j)-A(i,k)*A(k,j);
            end
        end
    end
    %RICAVO DIRETTAMENTE L ed U
    L = tril(A,-1)+eye(n); %PARTE DA DIAGONALE -1
    U = triu(A);
end