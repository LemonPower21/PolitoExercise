function [v,i] = es2b(x,tol)

v=0;
i=0;
term=1;

while term>=tol
    v=v+term;
    i = i+1;
    term = x^i/factorial(i);
end