format long e
N = 5
for i = 1:5
    for j=1:5
        A(i,j)= 2*i*j -3*(i+j);
    end
end
r = rank(A)
dimKer = N-r
autov = eig(A)
