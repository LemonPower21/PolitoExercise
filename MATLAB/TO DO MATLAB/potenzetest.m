clear all
clc
close all

A = [2,3,4;4,5,6;7,6,9]
toll = 1e-10;
m_max = 1000;
ztest = [1;2;3]
[l,w,m] = potenze(A,ztest,m_max,toll)

[lambda_calcolato,w,m] = potenzeinverse(A,0,ztest,toll,m_max)