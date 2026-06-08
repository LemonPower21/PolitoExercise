A = rand(100)
%X MATRICE SOLUZIONE AVENTE SULLE COLONNE LE SOLUZIONI 
x = zeros(100,30)
b1 = sum(A,2)
%INIZIALIZZO PRIMA SOLUZIONE
x(:,1) = A\b1

tic
for i=2:30
    %TROVO LA b-iesima PRENDENDO X DELLA COLONNA PREC
    b_i = x(:,i-1)
    %CALCOLO LA X IESIMA
    x(:,i)=A\b_i
end
t = toc