%MATRICE PIU VICINA DI RANGO N AD UNA MATRICE GENERICA A
x = linspace(4, 6, 8);
A = vander(x);
[U, S, V] = svd(A);

%RANGO 5 QUINDI BUTTO A ZERO AUTOVALORI SU da 6 fino alla fine
S(6:end, 6:end) = 0;
An = U * S_k * V';
risultato = norm(An, 1);
