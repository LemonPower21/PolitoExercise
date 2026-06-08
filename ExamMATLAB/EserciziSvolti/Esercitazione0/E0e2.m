 A = [1 2 3 4 5 6; 
5 6 7 8 9 10; 
9 10 11 12 13 14; 
15 16 17 18 19 20]

 %RIGHE PARI
B = A(:,end:-1:1)
C = A(2:2:end,:)


%RIGHE DISPARI
 D = A(1:2:end,:)

 %RIGHE 1 4 3 e COLONE 5 2

 E = A([1 4 3],[5 2])

 %DIAGONALE
 DIAG = diag(A)