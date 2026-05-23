function [Af] = qrbase(A,tol,mmax)
   for i=1:mmax
       [Q,R] = qr(A);
       Af = R*Q
       A = Af;
       if(norm(tril(A,-1),inf)   <= tol)
           break
       end
   end
end