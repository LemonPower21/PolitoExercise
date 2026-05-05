clear all
clc
close all
format long e;

for n=5:5:15
    A = hilb(n);
    b = sum(A,2);
    soluz = A\b
    errore_rel = norm(ones(n,1)-soluz)/norm(ones(n,1))
    condiz = cond(A,"inf")
    %ESSENDO NUMERO DI CONDIZIONAMENTO ELEVATO SIGNIFICA CHE C'E' UN ALTO
    %ERRORE E IL PROBLEMA E' NUMERICAMENTE INSTABILE
end
