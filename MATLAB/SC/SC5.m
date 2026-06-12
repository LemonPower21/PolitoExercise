format short e
A=full(gallery('neumann',100));

[U,S,V] = svd(A)
Rango = rank(S)
%CON RANGO S VEDO DOVE FINISCONO TERMINI DIVERSI DA ZERO IL SUCCESSIVO SARA
%NULLO
x = V(:,Rango+1:end)
norm(x,inf)