%TERMINI A CUI E' APPLICATA LA MATRICE
x=[0.1 0.14 0.24 0.36 0.07 0.25 0.4]
%SOLUZIONI
y=[1.3 0.69 1.14 0.88 0.54 0.8 0.21]

dimRighe = size(x,2)
dimColonne = 4 %FINO GRADO 3

V = zeros(dimRighe,dimColonne)
for i=1:dimRighe
    V(i,:) = [x(i)^0 x(i)^1 x(i)^2 x(i)^3]
end

ris = norm(V,2)
%2.71