function x = avanti(A,b)
    n = length(b);
    x = zeros(n,1)
    %INIZIALIZZO ULTIMO ELEMENTO
    x(1)=b(1)/A(1,1)
    for i=2:n
        s = A(i,1:i-1)*x(1:i-1)
        x(i) = (b(i)-s)/A(i,i)
    end
end