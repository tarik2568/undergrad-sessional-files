clc; 
clear all;
x=0:.08:5;
y=1./(1+x);
z=@(x) 1./(1+x);
calc_area=trapz(x,y);
exact_area=integral(z,0,5);
error=(calc_area-exact_area)/exact_area;
error_percent=abs(error)*100;
fprintf("error percent= %.4f%%\n",error_percent);


  