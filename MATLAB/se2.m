clear all
clc
close all

x = linspace(-pi,pi,100)
y= sin(x)
figure
plot(y)


x = linspace(-1,1,100)
y=exp(x)
figure
plot(x,y)

x = linspace(-5,5,100)  %se non mettessi 100 sarebbe 100 di default
y=exp(-x.^2) % il punto . significa OGNI ELEMENTO DEL VETTORE
figure
plot(x,y)

x = linspace(0,4*pi,100)
y = sin(x)./x
figure
plot(x,y)

x= linspace(0,2)
y= x.*sin(1./x)
figure
plot(x,y)

%per calcoli con vettori ./ .* .^
% -*r   STELLINE ROSSE
% ob PALLINI BLU
% k = NERO
%log = base e   log10 = base 10
%loglog(x,y) mette asse x e y in scala logaritmica
%help COMANDO  (AIUTO)
%doc COMANDO    (DOCUMENTAZIONE)

%ES 7
x = linspace(0.1,100,1000)
y = sqrt((100.*(1-0.01.*x.^2).^2 +0.02.*x.^2)./(((1-x.^2).^2) + 0.1.*x.^2))
figure
plot(x,y,'-*r')
loglog(x,y)