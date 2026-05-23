clear all
clc
close all

m_max = 100;
toll = 1e-10;
z = [1;2;3];
A_1 = [1,2,0;1,0,0;0,1,0]
[lambda_approssimato,w,m] = pow(A_1,z,toll,m_max)

 lambda_max = lambda_approssimato(end);

 plot(1:m+1,lambda_approssimato,'+r')
 autoval = max(eig(A_1))

 A_2 = [0.1,3.8,0;1,0,0;0,1,0]
 [lambda_approssimato2,w,m] = pow(A_2,z,toll,m_max)
  hold on
 plot(1:m+1,lambda_approssimato2,'+r')