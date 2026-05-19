

function [lambda,w,m] = funz1(A,z,toll,m_max)

w = z/norm(z)
lambda(1) =0;

for m=2:m_max
    z=A*w %ruoto
    lambda(m)=w'*z %calcolo autovalore
    w=z/norm(z); %normalizzo

    if(abs(lambda(m-1)-lambda(m))<toll*abs(lambda(m-1)))  %continuo finche errore è alto
        break;
    end
end
end
%HO AUTOVETTORE RELATIVO DI MODULO MASSIMO E DEVO SEMPLICEMENTE RUOTARE
%1)NORMALIZZO 2)RUOTO 3)CALCOLO_AUTOVALORE