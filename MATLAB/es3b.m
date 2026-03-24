%SCARICATI
clear all
clc
close all
format long

k = 1:50;
h = 2.^-k;
x=pi/4;

fn = (sin(x+h) -sin(x))./h;
[h',fn']

realvalue = cos(x)
err = abs(realvalue - fn)./abs(realvalue)
loglog(h,err)
figure

%si effettua cancellazione

% USA PROSTAFERESI
fnn = (2.*cos(x+h/2).*sin(h/2))./h
[h',fnn']
err2 = abs(realvalue - fnn)./abs(realvalue)
loglog(h,err2)