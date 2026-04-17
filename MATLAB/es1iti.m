A = zeros(4,4)

for i= 1:4
    for j= 1:4
        A(i,j)=(i+j)/2*max(i,j)
    end
end

B = A^3

detA = det(A)
detB= det(B)
detAB = det(A*B)

o2 = detAB < -detA*detB
o3 = abs(detAB-3*detA)/abs(detAB) %100 di errore percentuale
o4 = abs(detAB-(detA)^4)/abs(detAB) % errore di 10^-10 corretto