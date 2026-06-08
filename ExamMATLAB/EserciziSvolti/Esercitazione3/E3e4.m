for n=5:5:100
    A = zeros(n);
    for i=1:n
        for j=1:n
            if(i==j)
                A(i,j)=1;
            end
            if(i>j)
                A(i,j)=0;
            end
            if(i<j)
                A(i,j)=-1;
            end
        end
    end
    deter =det(A)
    r = rank(A)
    [U,S,V] = svd(A);
    singular_value = diag(S)
end

%IL RANGO E nrighe-1 il determinante è sempre 1