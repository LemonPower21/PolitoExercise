n = 4
for k=1:4;
M = [1, k, -1, -1; 0, 2, -1, -1; k, -1, 1, 1; 1, -1, 1, 1];
dimIm = rank(M)
dimKer = n-dimIm
end