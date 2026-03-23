clear all
clc
close all
A = [1:6;5:10;9:14;15:20]

%COLONNE INVERTITE
B = A(:,[6:-1:1])

%COLONNE PARI
C = A(:,2:2:end)
      %COMANDO END INDICA LA FINE (non esiste start)

%RIGHE DISPARI
D = A(1:2:end,:)

%RIGHE 1,4,3 E COLONNE 5,2
E =  A([1,4,3],[5,2])

%ELEMENTO DIAGONALE
F = diag(A)
