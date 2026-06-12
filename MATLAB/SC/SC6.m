A=[1 1 1 1; 1 -1 -1 1;0 1 0 1; 1 1 1 0];

x1 = ones(4,1)/norm(ones(4,1))
 
z=[1,1,1,1]'

w=z/norm(z)
for i=1:3
    z=A*w
    l = w'*z
    w = z/norm(z)
end
norm(w,1)