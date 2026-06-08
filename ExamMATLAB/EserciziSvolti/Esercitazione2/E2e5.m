A = [1 2 3 4 ; -1 0 4 1 ; 3 5 1 0; 2 -1 0 1; 1 1 -1 1 ; 2 -1 0 3]
B = [1 2 3 4 5 6 ]'

rangoA = rank(A)

%SOLUZIONE MINIMI QUADRATI SOVRADET CON QR (RANGO MASSIMO)
[Q, R] = qr(A);
x = R \ (Q' * B)

xmatlab = A\B