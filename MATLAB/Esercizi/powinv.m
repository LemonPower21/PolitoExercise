function [lambda, w, m] = powinv(A, p, z, tol, m_max)
    % Assicurati che z sia un vettore colonna
    w = z(:) / norm(z);
    
    lambda = zeros(m_max + 1, 1); % Pre-allocazione per efficienza
    lambda(1) = p;
    
    n = size(A, 1);
    [L, U, P] = lu(A - p * eye(n));
    
    for m = 1:m_max
        y = L \ (P * w);
        z = U \ y;
        
        % Calcolo del nuovo stimatore dell'autovalore
        lambda(m+1) = p + 1 / (w' * z);
        
        % Criterio di arresto basato sullo scarto relativo tra iterazioni consecutive
        if abs(lambda(m+1) - lambda(m)) <= tol * abs(lambda(m+1))
            lambda = lambda(1:m+1); % Taglia il vettore alla lunghezza effettiva
            return; % Esci direttamente dalla funzione
        end
        
        w = z / norm(z);
    end
    
    % Se si raggiunge m_max senza convergenza
    lambda = lambda(1:m_max+1);
end