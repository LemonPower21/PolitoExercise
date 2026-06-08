A = magic(3)

det(A)
primariga = A(1,:)
secondariga = A(3,:)

primac = A(:,1)
secondac = A(:,2)

scalare = dot(primariga,secondariga)
vett = cross(primac,secondac)