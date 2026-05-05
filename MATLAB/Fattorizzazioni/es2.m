%ES4
clear all
clc
close all

%SE MATRICE DEFINITA POSITIVA E SIMMETRICA (xt*A*x>0 e At=A)
%COME CREO MATRICE SIMMETRICA DEFINITA POSITIVA
%1) Prendo B quadrata con det!=0 e fare Bt*B = A (A è simm edf. positiva)

n=100;
d = 10*ones(n,1)
%vettori n-1 righe X 1 colonna
dsup = 5*ones(n-1,1)
dinf = -5*ones(n-1,1)

%sommo usando diag diag(VETTORECOLONNA, POSIZIONE SULLA DIAGONALE)
B= diag(d) +diag(dsup,1)+diag(dinf,-1)

%COSTRUISCO MATRICE DEFINITA POSITIVA SIMMETRICA  A (RANK B E' MAX; A=B'*B)
detB = det(B)
A = B'*B

%FATTORIZZO CON CHOLESKI E CALCOLO INVERSA
R = chol(A)
invR = inv(R)

%CALCOLO INVERSA CON CHOLESKI E CON MATLAB
invA = invR*invR'
invA_matlab = inv(A)


errore = abs(norm(invA)-norm(invA_matlab))/norm(invA_matlab)

%risolvo sistema Ax=B (R'*Rx=B,dove Rx=y R'y=B)
b  = sum(A,2);
y = R'\b
x=R\y
solvera = ones(n,1)
errorerel = norm(x-solvera)/norm(solvera)