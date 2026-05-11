%HO AUTOVETTORE RELATIVO DI MODULO MASSIMO E DEVO SEMPLICEMENTE RUOTARE
%1)NORMALIZZO 2)RUOTO 3)CALCOLO_AUTOVALORE

clear all
clc
close all

A_1 = [1,2,0;1,0,0;0,1,0];
z_1 = [1;2;3];
toll_1 = 1e-1;
m_max_1 =100;


[lambda1,w1,m1] = funz1(A_1,z_1,toll_1,m_max_1)