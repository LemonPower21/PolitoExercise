clear all
clc
close all

m_max = 100;  
tol = 1.0e-10; 
z = [1;2;3];   

A1 = [1 2 0; 1 0 0; 0 1 0];         
A_2 = [0.1 3.8 0; 1 0 0; 0 1 0];    
A_3 = [0 -1 0; 1 0 0; 0 1 0];    



%NELLA PRIMA MATRICE VIENE RAGGIUNTO DOPO 35 ITERAZIONI L'AUTOVALORE
%DESIDERATO
[lambda,w,m] = potenze(A1,z,tol,m_max);
plot(1:m+1,lambda,'b+-','linewidth',2)   
lambda_max = lambda(end)           
m


%NELLA SECONDA ARRIVIAMO FINO ALLA FINE SENZA RAGGIUNGERE RAPIDAMENTE
%L'AUTOVALORE... QUESTO PERCHE' GLI AUTOVALORI  L2/L1 DANNO NUMERO MOLTO
%VICINO AD UNO QUINDI AD OGNI ITERAZIONE OSCILLA DAVVERO POCO (E' PIU VELOCE SE IL
%RAPPORTO TENDE A ZERO
figure
[lambda2,w2,m2] = potenze(A_2,z,tol,m_max);
plot(1:m2+1,lambda2,'b+-','linewidth',2)   
lambda_max2 = lambda2(end)           
m2



%IN QUESTO CASO NON FUNZIONA AFFATTO IN QUANTO CI SONO AUTOVALORI COMPLESSI
figure
[lambda3,w3,m3] = potenze(A_3,z,tol,m_max);
plot(1:m3+1,lambda3,'b+-','linewidth',2)   
lambda_max3 = lambda3(end)           
m3





