clear all
clc
close all


z = [1,1,1]';
tol = 1e-10;
p = 0.5


A1 = [ 
1 -2 0;
0 2 0;
1 1 3];

A2 = [0.5 -2 0;
0 2 0;
1 1 3];

A3 = [0 -2 0;
0 1 0;
1 1 3];


%TUTTO OK FUNZIONA ALLA GRANDE
[lambda_p,w,m] = potenze_inverse(A1,p,z,tol,100);
%AUTOVALORE PIU VICINO A P
lambda_p(end)
eigs(A1,1,p)




%RITORNA NAN IN QUANTO p =0.5 E' AUTOVALORE (MATRICE A-LI E' SINGOLARE)!!!!!!!!!!!!!!!
[lambda_p2,w,m] = potenze_inverse(A2,p,z,tol,100);
%AUTOVALORE PIU VICINO A P (NaN)
potinv2 = lambda_p2(end)
%UN SOLO AUTOVALORE VICINO A P
matlab2 = eigs(A2,1,p)




%A CAUSA DELL'ENORMITA' DELL ERRORE SIGNIFICA CHE METODO DELLE POTENZE
%INVERSE NON CONVERGE MAI: INFATTI E' EQUISPAZIATO DAGLI AUTOVALORI 1 E 0
%(P=0.5)
[lambda_p3,w,m] = potenze_inverse(A3,p,z,tol,100);
%AUTOVALORE PIU VICINO A P (NEGATIVO)
potinv = lambda_p3(end)
%UN SOLO AUTOVALORE VICINO A P (Zero)
matlab= eigs(A3,1,p)


