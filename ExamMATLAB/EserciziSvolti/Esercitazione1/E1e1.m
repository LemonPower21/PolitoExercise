 x= pi/4
 derivataesatta = cos(x)
 for i=1:50
     h(i) = 2^-i
     r(i) = (sin(x+h(i))-sin(x))/h(i)
     d(i) = 2*cos(x+h(i)/2)*sin(h(i)/2)/h(i)

     err_relr(i) = abs(derivataesatta-r(i))/abs(derivataesatta)
     err_reld(i) = abs(derivataesatta-d(i))/abs(derivataesatta)
 end

figure
loglog(h,err_reld,'r-')
hold on
loglog(h,err_relr,'b-')