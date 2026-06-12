H  = hilb(12)
b = sum(H,2)
c = b
c(1)= c(1)+ 10^-6

%SI RISOLVE SEMPRE CON PINV 
z2 = pinv(H)*c
%IL VALORE PIU VICINO E' 4.4 QUINDI E
norm(z2,2)