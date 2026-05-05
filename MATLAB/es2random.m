clear all
clc
close all
A = [1,2,3;2,1,3;1,1,2;0,1,1;3,1,4]
b = [1,-2,2,3,0]'

[Q,R] = qr(A)
y = Q'*b
x=R\y

euclidea_residuo = norm(b-A*x)

%NE HO INFINITE (COMPARE UNO ZERO NELLE SOLUZIONI)

%MATLAB VEDE SOLUZIONI CON PIU' ZERI NOI CON QR VEDIAMO QUELLA PIU' VICINA
%AD ORIGINE