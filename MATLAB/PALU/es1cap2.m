clear all
clc
close all

A= zeros(100);
for i=1:100
    for j=1:100
        A(i,j)=max(i,j);
    end
end
[L,U] = lu(A);

b = ones(100,2)

%A = LU
%Ax = b
%LUx = b
%Ux=y
%Ly=b

y=L\b;
x= U\y

errore = norm(A*x -b)
%ERRORE DI 10-15 (OTTIMIZZATO CON PA=LU DA ERRORE 0)