clear all
clc
close all
format short

A = [1,5,0,3,9;7,8,4,0,1;2,5,3,9,0;1,-1,2,1,1;7,3,-2,0,1]


for i = 1:100
    [Q,R] = qr(A);
     A=R*Q;
end

A