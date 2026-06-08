A = [3 -2 1 2;-1 0 2 1; 0 5 -6 -1; 1 1 -1 1; 1 -1 -1 -1; 8 -1 -5 2]
B = [ 1 -3 7 0 -6 2]'

rank(A)
%RANGO NON MASSIMO APPLICO SVD
[U,S,V]= svd(A)
y = S\U'*B
x = V'\y

x_real = pinv(A)*B
errore = norm(x-x_real)/norm(x_real)
%ERRORE TRASCURABILE