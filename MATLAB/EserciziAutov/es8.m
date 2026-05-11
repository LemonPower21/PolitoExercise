clear all
clc
close all

A = [3, 1, 2, 4;
-1, 0 ,7, 9;
0, 1, 2 ,4;
,2 ,4 ,1 ,1;]

%FUNZ SENZA PIVOTING
[L,U] = elleu2(A)
m32= L(3,2)
%FUNZ CON PIVOTING
[Lt,Ut,P] =lu(A)
m32t = Lt(3,2)

ris = m32*m32t