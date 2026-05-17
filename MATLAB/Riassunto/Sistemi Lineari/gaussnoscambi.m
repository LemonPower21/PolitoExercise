function x = gaussnoscambi(A,b)
    n = length(b);
    %DA INIZIO FINO ALLA PENULTIMA COLONNA   (SOTTO L'ULTIMA E' SEMPRE ZERO PER DEF)
    for k = 1:n-1
        % CICLO SULLE RIGHE SOTTOSTANTI IL PIVOT E CALCOLO I MOLTIPLICATORI
        for i = k+1:n
            %IL MOLTIPLICATORE VIENE PROPRIO SALVATO DOVE DOVREBBE APPARIRE
            %UNO ZERO!
            A(i,k) = A(i,k)/A(k,k);
            %APPLICO LA SOSTITUZIONE DELLA RIGA I-ESIMA R = R  -Moltiplicatore*R
            for j = k+1:n
                A(i,j) = A(i,j)-A(i,k)*A(k,j);
            end
            %AGGIORNIAMO ANCHE VETTORE TERMINI NOTI
            b(i) = b(i)-A(i,k)*b(k);
        end
    end
    
    %-----METODO SOSTITUZIONE INDIETRO----
    %INIZIALIZZO VETTORE X E ULTIMO ELEMENTO DI X (SOLUZIONE)
    x = zeros(n,1);
    x(n) = b(n)/A(n,n);
        
    %METODO SOSTITUZIONE ALL'INDIETRO
    for i = n-1:-1:1
        x(i) = (b(i)-A(i,i+1:n)*x(i+1:n))/A(i,i);
    end
end