for n=-5:5
v1 = [1, n, 0];
v2 = [0, 1, n];
v3 = [n, 0, 1];
V = 1/6*(abs(det([v1;v2;v3])));
if abs(V) <eps
    n
end
end