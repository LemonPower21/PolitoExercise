clear all
clc
close all

x=1;
tol = 1e-10;
[v,i] = es2b(x,tol)
err = abs(v-exp(x))/(exp(x))