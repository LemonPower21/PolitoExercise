 x= linspace(-1,1,100)
 y=zeros(1,100)
 for i=1:100
     if(x(i)<0)
         y(i)= -2*x(i)
     end
      if(x(i)==0)
         y(i)= 0
      end  
      if(x(i)>0)
         y(i)= 2*(x(i))
     end    
 end
 plot(x,y)