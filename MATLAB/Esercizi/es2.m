clear all
clc
close all
m_max = 100;
tol = 1e-10;
p=0.5;
A_1 = [1,-2,0;0,2,0;1,1,3];
z = [1,1,1];

[lambda,w,m_max] = powinv(A_1,p,z,tol,m_max)
lambda_p = lambda(end)

autovalore_p = eigs(A_1,1,p)