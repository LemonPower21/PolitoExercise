v1 = [1, 2, -1, 0, 3]; v2 = [2, -1, 0, 1, 1]; v3 = [0, 1, 2, -1, 4]; v4 = [3, 0, 1, 2, -1]

V = [v2+v1;v4-v3]
W = [v1-v4;v2+v3]
M = [V;W]

rank(W)%2
rank(V) %2
rank(M) %3 (V+W)

dimIntersezione =  -(rank(M)-rank(V)-rank(W))