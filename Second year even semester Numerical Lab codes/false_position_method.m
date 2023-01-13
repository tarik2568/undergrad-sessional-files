clc
clear all
close all
x=-10:1:10;
f=(x.^3)-x-1;
plot(f,x)
grid on
a=1; %negetive value
b=2; %positive value
disp('It    a        b      f(a)      f(b)      x      f(x)')
disp('________________________________________________________')
for i=1:1:50
    A=(a.^3)-a-1;
    B=(b.^3)-b-1;
    x=((a*B)-(b*A))/(B-A);
    f=(x.^3)-x-1;
    fprintf('%d    %.3f   %.3f   %.3f    %.3f    %.3f   %.3f\n',i,a,b,A,B,x,f)
    if abs(f)<=.01
        break
    end
    if f>0
        b=x;
    else
        a=x;
    end
end
disp('________________________________________________________')
root=x