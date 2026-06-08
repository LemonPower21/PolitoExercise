

%CHOLESKY E SISTEMI LOWER A = R'R = LL'

A = zeros(20) + diag(12*ones(20,1))+ diag(4*ones(19,1),-1)+ diag(4*ones(19,1),1)
B  =linspace(0,1,20)'
autov = eig(A)


%IN QUESTO CASO CHOLESKY A = R'R = LL'
L = chol(A,'lower')

y=L\B
x = L'\y

norm(x+y,inf)
%________________________________________
A2 = zeros(42) + diag(20*ones(42,1))+ diag(4*ones(41,1),-1)+ diag(4*ones(41,1),1)
B2 = linspace(-1,1,42)'
autovnuovi = eig(A)
L2  =chol(A2,"lower")
y2 = L2\B2;
x2 =L2'\y2;

norm(x2+y2,inf)

