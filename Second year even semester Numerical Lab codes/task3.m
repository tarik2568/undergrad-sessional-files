clc
clear all
m=5;
disp('The number triangle from 1 to 5 is given below: ')
for i=1:m
    for j=1:m-i
        fprintf(' ');
    end
    for k=1:i
       fprintf('%d ',i);
    end
    fprintf('\n');
end
