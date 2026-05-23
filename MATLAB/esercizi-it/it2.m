clear all
clc
close all

A=toeplitz([1,2,3,4,5])
Z = [A;2*A]

[Q,R] = qr(Z)
det(R(1:5,1:5))