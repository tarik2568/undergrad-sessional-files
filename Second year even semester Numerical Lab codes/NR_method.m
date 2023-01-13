clc
clear all
close all
disp('It    Xi      f(Xi)     f`(Xi)    Xi+1    ');
disp('___________________________________________');
for i=1:1:50
    x(1)=-1;
    a(i)=exp(-x(i))-x(i);
    b(i)=-exp(-x(i))-1;
    c(i)=x(i)-(a(i)/b(i));
    x(i+1)=c(i);
    fprintf('%d   %.3f    %.3f    %.3f    %.3f \n', i,x(i),a(i),b(i),c(i))
    if(abs(a(i)<.001))
        break;
    end
end
a
disp('___________________________________________');