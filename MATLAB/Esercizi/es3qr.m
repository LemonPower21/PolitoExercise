clear all
clc 
close all

H = hilb(10)

[Af] = qrbase(H,1e-14,100)
autov = diag(Af)
autov_matlab = eig(H)

err = abs(autov_matlab - sort(autov))

B1 = [0,0,2;1,0,1;0,1,1];
%HO COMPLESSI CONIUGATI
[Bf] = qrbase(B1,1e-14,100)
autov = diag(Bf)
autov_matlab = eig(B1)

AUTOV_COMPLEX = eig(Bf(2:3,2:3))