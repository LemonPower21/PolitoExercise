A = [1,0;0,1;1,1];

for j=1:2
    B = [j,1,2];
    TOT  =[A,B'];
    rA =rank(A)
    rTOT = rank(TOT)
end
 x = cond(A)