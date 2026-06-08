tic
for i=100:100:500
    A = rand(i);
    [Q,R] = qr(A);
    b=sum(A,2);
    %A = QR
   %QRx = B ---> y=Q\B x= R\y
   x = R\(Q'*b);

end
t = toc

tic
for i=100:100:500
    A = rand(i);
    [L,U,P] = lu(A);
    b=sum(A,2);
    %A = QR
    x = U\(L\(P*b));

end
t2 = toc