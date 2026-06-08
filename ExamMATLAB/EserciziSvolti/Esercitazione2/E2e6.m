x = linspace(0,pi,15)
y = x.*cos(x)

coeff = polyfit(x,y,2) %RITORNA COEFFICIENTI
c1 = coeff(1)
c2 = coeff(2)
c3 = coeff(3)
%METODI EQUIVALENTI
f = polyval(coeff,x)
f2 = c1.*x.^2 +c2.*x +c3
%STAMPO IN X CHE VA DA 0 A PI
plot(x,y,'b*')
hold on
plot(x,f2,'r-')