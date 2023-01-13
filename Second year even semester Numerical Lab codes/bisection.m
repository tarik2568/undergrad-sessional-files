clc
clear all
a=1;
b=2;
disp('it_no   a      b       x      f(x) ')
disp('______________________________________')
for i=1:1:50
    x=(a+b)/2;
    f=(x.^3)-x-1;
    if abs(f)<=.01
        break
    end
    if f<0
        a=x;
    elseif f>0
        b=x;
    end
    % fprintf('  %d    %.3f   %.3f   %.3f   %.3f\n',i,a,b,x,f)
end

fprintf('\n\nRequired root = %.3f',x)
