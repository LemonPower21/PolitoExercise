%fattorizzazione di gauss
function [L,U] = elleu(A)
n = size(A,1)   %numero di righe
%per ogni iterazione k
    for k=1:n-1
        %per ogni riga
        for i=k+1:n
            A(i,k)=A(i,k)/A(k,k) %moltiplicatore, lo salviamo nella matrice A sotto
            for j=k+1:n
                A(i,j)=A(i,j)-A(i,k)*A(k,j)
            end
        end
    end
    L = tril(A,-1)+ eye(n);
    U = triu(A);
end

%IL PROGRAMMA FUNZIONA SE NELLE MATRICI NON HO ZERI (FATTORIZZO PA)