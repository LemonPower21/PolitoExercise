 B = zeros(10)
 X = ones(1,11)
 D = 5*ones(1,12)
 diaginf = diag(X*-1,-1)
 diagsup = diag(X*3,+1)
 B = diag(D) + diagsup+diaginf