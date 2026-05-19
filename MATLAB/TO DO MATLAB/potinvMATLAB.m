clear all
clc
close all

A= magic(3)

%CALCOLO AUTOVALORE
autov = eig(A)
p=5;


%P=0 ottengo calore piu piccolo della matrice
%CALCOLO AUTOVALORE VICINO (MATRICE,Num_autov_vicini,p)
autovVicino = eigs(A,1,p)