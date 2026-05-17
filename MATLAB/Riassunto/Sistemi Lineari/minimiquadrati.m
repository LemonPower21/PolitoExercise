x = [0 0.06 0.14 0.25 0.31 0.47 0.60 0.70]
y = [0 0.08 0.14 0.20 0.23 0.25 0.28 0.29]

%PORTO NELLA FORMA Ax = b  
b = y'

m = length(x);
A = [x', ones(m,1)]

r = rank(A); %il rango è massimo

[m n] = size(A);
[Q,R] = qr(A);
%Q'QRx = Q'B
y = Q'*b
%rendo quadrata
y1 = y(1:n)
yminquad = R(1:n,1:n)\y1