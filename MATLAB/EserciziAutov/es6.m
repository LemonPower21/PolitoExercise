clear all 
clc
close all
A = [1,2,3,4;-1,0,4,2;3,5,1,0;2,-1,0,-1;1,1,-1,1;2,-1,0,3];
b=[1:6]'

[m,n]=size(A)
%UNICA SOLUZIONE PROBLEMA MINIMI QUADRATI IL RANGO DEVE ESSERE MAX
%4--->MASSIMO PARI AL N COLONNE

r = rank(A)
[Q,R] = qr(A)
R_TILDE = R(1:n,1:n)

c = Q'*b

%vettore colonna
c_tilde =  c(1:n)

xstar= R_TILDE\c_tilde
x=A\b
err = norm(x-xstar)/norm(x)