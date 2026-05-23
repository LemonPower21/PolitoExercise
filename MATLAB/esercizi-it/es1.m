A = [66 -78 27; -78 93 -36; 27 -36 45]
[X,D] = eig(A)


%A AMMETTE CHOLESKY IN QUANTO HA SOLO AUTOVALORI POSITIVI

B = [1 -2 3; 4 -5 6; -7 8 0]

autov = eig(B)

rho = max(abs(eig(B)))

%RAGGIO SPETTRALE VALE 6.9083