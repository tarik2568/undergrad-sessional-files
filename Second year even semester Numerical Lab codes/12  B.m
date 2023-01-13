clc
clear all;
x=0;
y=1;
f=@(x,y)((y-x)/(y+x));
h=0.002;
j=0; 
display('IT.NO.  X      Y');
display('_____________________');

for i=0:h:0.1
    j=j+1;
    x=x+h;
    y=y+h*f(x,y);
    fprintf("%d  %f %f\n",j,x,y);
    if(x>.1)
        break;
    end
end
