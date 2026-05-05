clear all
clc
close all

i=1;

for n=100:100:2000
A=rand(n);
b = sum(A,2);  %SOLUZIONE TAL CHE TUTTE LE X siano 1 (SOMMO ELEMENTI DELLE COLONNE AVENDO FISSATA LA RIGA) (AD ESAMUE USO QUESTO)
b1 = A*ones(1,1); %DUE ESPRESSIONI SONO EQUIVALENTI MA ERRORI CAMBIANO


%FATTORIZZO CON GAUSS 0.0362
tic
[L,U,P] = lu(A);
y = L\(P*b);
x= U\y;
solvera = ones(n,1);  %nrighe 1 colonna

%SALVO NEL VETTORE RIGA ERRORE
errore(i) = norm(solvera-x)/norm(solvera);
tgauss = toc



%CHOLESKI E' MEGLIO PER SIMMETRICA DEFINITA POSITIVA

%FATTORIZZO QR
tic
[Q,R] = qr(A);
xqr = R\(R'*b);
errore2(i) = norm(solvera-xqr)/norm(solvera);
tqr = toc
rapporto(i)=tqr/tgauss
i=i+1;
end


[errore',errore2',rapporto']

plot(1:20,rapporto,'o')
