clear all
clc
close all
format long e

for n=5:5:100
    v = -ones(n);
    A = triu(v,1) + diag(ones(n,1));
    rang = rank(A) %=99 (DOVREBBE ESSRE 100 MA IN REALTA AVENDO RANGO MISURATO COME NUMERO DI VALORISINGOLARE DIVERSI DA ZERO AM SE HO VALORE SINGOLARE e-18 E' CONSIDERATO COME ZERO) 
    deter = det(A) %=1
    [S,V,D] = svd(A);
    s = diag(S);
end