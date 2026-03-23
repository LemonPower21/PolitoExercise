%MATRICE MAGICA (SOMMA SU RIGHE COLONNE E DIAGONALE)
A = magic(3)


%DETERMINATE
detA = det(A)



%PRODOTTO SCALARE
v1 = A(1,:)
v2 = A(3,:)
%PRIMO MODO
PS = dot(v1,v2)
%SECONDO MODO
PS2 = v1*v2'
%TERZO MODO
PS3 = v1*transpose(v2)




%PRODOTTO VETTORIALE
v3 = A(:,1);
v4 = A(:,2);
PV = cross(v3,v4)
