function x = indietro(A,b)
    n = length(b);
    x = zeros(n,1);
    %parto qui dalla fine (ULTIMO)
    x(n) = b(n)/A(n,n);
    %i scorre dal PENULTIMO al PRIMO
    for i = n-1:-1:1
        %somma elementi già trovati
        s = A(i,i+1:n)*x(i+1:n)
        %trova termine xnesimo
        x(i) = (b(i)-s)/A(i,i);
    end