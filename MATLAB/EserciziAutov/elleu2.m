function [L,U] = elleu2(A)

n = size(A,1);

% WARNING ! ! ! se A(1,1) << 1, vicino allo zero.
% si cerca, fissata la colonna j il primo pivot A(j,1)
% cioé pivot = max {A(i,j)} [1=<j=<n]
% poi si scambia la riga i con la prima
% P matrice di permutazione : tiene conto degli scambi di righe
% PA = LU
    for k = 1:n-1 % fisso la riga
        for i = k+1:n % itero sulle righe
            A(i,k) = A(i,k)/A(k,k); 
            % moltiplicatore LO SALVO nella matrice    
            for j = k+1:n % itero sulle colonne
                A(i,j) = A(i,j) - A(i,k)*A(k,j);
                % riduco la riga i
    
            end
        end
    end
    U = triu(A); % seleziona la parte triangolare superiore
    L = tril(A, -1) + eye(n); 
    % seleziona la parte triangolare inferiore
    % parto dalla diagonale -1 (sotto la diagonale principale)
    % si aggiunge eye(n) in modo tale da avere solo 1 sulla
    % diagonale principale
end
