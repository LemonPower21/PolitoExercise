clear all
clc
close all

x=1;
[fx] = es1b(x)
xx = linspace(-1,1,5)
[fxx] = es1b(xx)
plot(xx,fxx)