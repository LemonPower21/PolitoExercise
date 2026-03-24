%DEFINISCO FUNZIONE 
function [fx] = es1b(x)
%LUNGHEZZA VETTORE
 n = length(x);
 fx  = zeros(1,n);

 %CICLO FOR per i da 1 a N (matlab va da 1 a n)
 for i=1:n
     if x(i) < 0
         fx(i) = -2*x(i);
     elseif x(i) == 0 
         fx(i) = 0;
     else
         fx(i) = 2*x(i);
     end
 end