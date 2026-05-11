clear all
clc
close all

x = linspace(0,pi,15);
y  =x.*cos(x);
plot(x,y,'ob');
hold on
b=y';
A=[(x').^2,(x'),ones(15,1)]

c = A\b
parabola = @(x) c(1)*x.^2+c(2)*x +c(3)
xx= linspace(0,pi,100)
p_eval = parabola(xx)

plot(xx,p_eval,'-r')