clear all
clc
close all


%METODO PALU (16,32s)
tic
A = rand(10000);
x1 = ones(10000,1);
b1 = A*x1 %100x100 e 100x1 =100x1
[L,U,P]=lu(A);
tabella_soluz = zeros(10000,30); %100 RIGHE 30 COLONNE
tabella_soluz(:,1)=x1;
for i=2:30
    b_iesim = tabella_soluz(:,i-1)
    y=L\b_iesim %Ly=B
    tabella_soluz(:,i)=U\y; %Ux=y
end
t = toc

%METODO HARDCORE (254,02s)
tic
A = rand(10000);
x1 = ones(10000,1);
b1 = A*x1 %100x100 e 100x1 =100x1
tabella_soluz = zeros(10000,30); %100 RIGHE 30 COLONNE
tabella_soluz(:,1)=x1;
for i=2:30
    b_iesim = tabella_soluz(:,i-1)
    tabella_soluz(:,i)=A\b_iesim; %Ax=B
end
t = toc