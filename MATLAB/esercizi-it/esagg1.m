clear all
clc
close all
n = 100

for i=1:100
    for j=1:100
       if(j>i)
            A(i,j) = n-j+1;
        end
        if(j<=i)
            A(i,j)=0;
        end
    end
end

for k=100:-1:1
    x(100-k+1)=k;
end

for y=99:-1:1
    z(99-y+1)=y;
end
Atot = A + diag(x) + diag(z,-1)

[X,D] = eig(Atot)