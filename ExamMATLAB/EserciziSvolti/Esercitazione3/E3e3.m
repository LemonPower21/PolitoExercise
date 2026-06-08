clear all
clc
close all
format short e


B = [1 -2 0; 0 2 0; 1 1 3];
B2 = [0 1 0 1; 2 0 4 -2; -1 0 -1 0; -1 2 1 0];

qrautov(1e-14,100,B)
eig(B)
qrautov(1e-14,100,B2)
eig(B2)
function A = qrautov(toll,mmax,A)
    for i=1:mmax
        [Q,R]= qr(A);
        A = R*Q;
        if(norm(tril(A,-1),inf) < toll)
            break
        end
    end
end