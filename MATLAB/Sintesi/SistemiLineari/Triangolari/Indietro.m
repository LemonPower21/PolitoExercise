%INDIETRO = TRIANGOLARE_SUPERIORE
clear all
clc
close all

A = [4, 2, 3;
      0, 3, 1;
      0, 0, 5];

b = [18; 10; 15];

%INIZIALIZZO PRIMO ELEMENTO
n=length(b);
x=zeros(n,1);
x(n)=b(n)/A(n,n); 

%VADO ALLE RIGHE PRECEDENTI
for i=n-1:-1:1
    %SOMMATORIA DEGLI ELEMENTI PRECEDENTI (TROVATI PRIMA)
    soluz = A(i,i+1:n)*x(i+1:n);
    %APPLICO DEFINIZIONE PER TROVARE X_IESIMO
    x(i)=(b(i)-soluz)/A(i,i)
end

%verifica
bcheck = A*x