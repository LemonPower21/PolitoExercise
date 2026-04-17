v = [1,1,3];
u = [2,0,3];
p = (dot(v,u)/(norm(u)^2))*u %proiezion  di v su u (v.u/||u||^2 )* u

ang = acos((dot(u,v)/(norm(u)*norm(v)) )) %gia radianti