A = [0 1; 0.06 1; 0.14 1; 0.25 1; 0.31 1; 0.47 1; 0.60 1;0.70 1] 
B  =  [0 0.08 0.14 0.20 0.23 0.25 0.28 0.29]'
[m,n] = size(A)
[Q,R] = qr(A)

% ||Ay -B|| diventa tramite QR e moltiplicando tutto per Q' ||Ry -c||
c = Q'*B
%||Rtildey -ctilde|| è la nostra soluzione in quanto R piu colonne che
%righe cioè R sarà un vettore colonna costituito da (Rtilde e tanti zero
%sotto)

%FILTRIAMO FINO ad n ... SI NOTI CHE m>n
ctilde = c(1:n)
soluz = R(1:n,1:n)\ctilde