%TRIANGOLARI INFERIORI
clear all
clc
close all

A = [4, 0, 0;
      2, 3, 0;
      1, 1, 5];

b = [8; 13; 16];

%CALCOLO LUNGHEZZA VETTORE COLONNA B
n = length(b);
%INIZIALIZZO VETTORE COLONNA DELLE X
x=zeros(n,1);
%CALCOLO IL PRIMO VALORE
x(1) = b(1)/A(1,1)

%ADESSO VADO DALLA SECONDA RIGA FINO ALLA FINE
for i=2:n
    %CALCOLO SOMMATORIA (DA 1 FINO I-1)
    s=A(i,1:i-1)*x(1:i-1);
    %CALCOLO SOLUZIONE I-ESIMA
    x(i) = (b(i)-s)/A(i,i);
end

%CHECK
b_check = A*x