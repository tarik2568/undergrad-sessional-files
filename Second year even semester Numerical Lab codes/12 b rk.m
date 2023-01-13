clc 
clear all;
x=0;
y=1;
f=@(x,y)((y-x)/(y+x));
h=0.002;
k1=h*f(x,y);
k2=h*f(x+(h/2),y+(k1/2));
k3=h*f(x+(h/2),y+(k2/2));
k4=h*f(x+h,y+k3);
dy=(1/6)*(k1+(2*k2)+(2*k3)+k4);
y=y+dy;
y