
clear all
clc
close all

% 1. Define the 5x4 matrix A and a compatible 5x1 vector B
A = [3,-2,1,2; -1,0,2,1; 0,5,-6,-1; 1,-1,-1,-1; 8,-1,-5,2];
B = [1; -3; 7; 0; -6]; % Changed to a 5x1 column vector

% 2. Calculate the rank of A
rA = rank(A); 

% 3. Compute the Singular Value Decomposition
[U, S, V] = svd(A);
s = diag(S); % Extract the singular values

% 4. Calculate the pseudo-inverse solution manually using SVD
y = zeros(size(A, 2), 1); % Initialize y as a 4x1 vector
y(1:rA, 1) = (U(:, 1:rA)' * B) ./ s(1:rA);
X = V * y

% 5. Verify using MATLAB's built-in pseudo-inverse function
XSTAR = pinv(A) * B



%TROVIAMO KERNEL
xgenerico = XSTAR+V(:,4)


%residuo 1
RESIDUO = norm(A*XSTAR-B)