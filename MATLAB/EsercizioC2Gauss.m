clear all
close all
clc

A = [1,1,1;2,-4,1;3,2,-1]
b = [1;0;2]
[L,U] = elleu(A)


%\ RISOLVE SISTEMA LINEARE linsolve()
y = L\b
x= U\y
%controllo risultati
xmatlab = A\b
errorsoluz = norm(x-xmatlab)/norm(xmatlab)
%essendo 10^-16 è giusto


%fattorizzazione in caso di zeri PA=LU
[L,U,P] = lu(A)

%Ly = Pb
%Ux=y

yp=  L\(P*b)
xp= U\yp

errorsoluz = norm(xp-xmatlab)/norm(xmatlab)
%ERRORE E ZERO PERCHE' E' LO STESSO IMPLEMENTATO DA MATLAB