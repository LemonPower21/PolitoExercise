function x = avanti(A,b)
%lunghezza di matrice colonna b
    n = length(b);
    %inizializzo vettore soluzione n righe 1 colonna
    x = zeros(n,1);
    %inizio primo elemento soluzione (PARTO DA SOPRA) (MATLAB NON PARTE da
    %0)
    x(1) = b(1)/A(1,1);
    %TROVO ALTRE SOLUZIONI DA 2 FINO N
    for i = 2:n
        %somma elementi già trovati
        %A(i,1:i-1)  ELEMENTI A SINISTRA DELLA DIAGONALE
        %x(1,:i-1) prende incognite già calcolate
        s = A(i,1:i-1)*x(1:i-1);
        %trova il termine xnesimo
        x(i) = (b(i)-s)/A(i,i);
    end
