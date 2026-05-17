function x = indietro(A,b)
    n = length(b);
    x = zeros(n,1)
    %INIZIALIZZO ULTIMO ELEMENTO
    x(n)=b(n)/A(n,n)
    for i=n-1:-1:1
        s = A(i,i+1:n)*x(i+1:n)
        x(i) = (b(i)-s)/A(i,i)
    end
end