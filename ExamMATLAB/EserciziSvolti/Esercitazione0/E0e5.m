y1 = @(x) sin(x)
x1 = linspace(-pi,pi,100)
f1 = y1(x1);
plot(x1,f1)


figure
y2 = @(x) exp(x)
x2 = linspace(-1,1,100)
f2 = y2(x2)
plot(x2,f2)

figure
y3 = @(x) exp(-x.^2)
x3 = linspace(-5,5,100)
f3 = y3(x3)
plot(x3,f3)

figure
y4 = @(x) sin(x)./x
x4 = linspace(0,4*pi,100)
f4 = y4(x4)
plot(x4,f4)

figure
y5 = @(x) x.*sin(1./x)
x5 = linspace(0,2,100)
f5 = y5(x5)
plot(x5,f5)