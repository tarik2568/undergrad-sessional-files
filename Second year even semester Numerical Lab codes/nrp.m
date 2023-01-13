clc
clear all
x=1.5;
y=3.5;
display('It No.    U        V          X          Y');

for i=1:1:20;
    u=x^2-y^2-3;
    v=x^2+y^2-13;
    a=2*x;
    b=-2*y;
    c=2*x;
    d=2*y;
    
    m=x-(((u*d)-(v*b))/((a*d)-(b*c)));
    n=y-(((v*a)-(u*c))/((a*d)-(b*c)));
    
    if(u<=.001 && u>=-.001 && v<=.001 && v>=-.001)
        break;
    end
    fprintf('%d    %f  %f  %f  %f\n',i,u,v,m,n)
    x=m;
    y=n;
end