clc
clear all
close all
disp('It   Xi-1     f(Xi-1)    Xi      f(Xi)    Xi+1');
disp('________________________________________________________');
for i=1:1:50
    a(1)=1;
    b(1)=2;
    d(i)=exp(-a(i))-a(i);
    c(i)=exp(-b(i))-b(i);
    x(i)=((a(i)*c(i))-(b(i)*d(i)))/(c(i)-d(i));
    f(i)=exp(-x(i))-x(i);
    a(i+1)=b(i);
    b(i+1)=x(i);
    fprintf('%d   %.3f    %.3f    %.3f    %.3f    %.3f\n',i,a(i),d(i),b(i),c(i),x(i));
    if((f(i)<.01)&&(f(i)>-.01))
        break
    end
end
disp('________________________________________________________');
