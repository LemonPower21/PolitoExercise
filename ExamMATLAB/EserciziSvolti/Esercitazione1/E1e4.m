format long e
x = 121
y=122
z = 150

ris = ((factorial(x)^2) + (factorial(y)^2))/factorial(z)
%ERRORE DOBBIAMO semplificare

%((121!)*(1+122^2))/prod(122:1:150)


ris_semp = (factorial(121)*(1+122^2))/prod(122:1:150)
%1,7069e+143