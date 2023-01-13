clc
clear all
xpre=1;
x=2;
disp('     IT No.     Xi-1      Xi      F(Xi-1)    F(Xi)     Xi+1     F(Xi+1)');
disp('_______________________________________________________________________');
for i= 1:1:100
   fxpre=exp(-xpre)-xpre;
   fx=exp(-x)-x;
   xpost=((xpre*fx-x*fxpre)/(fx-fxpre));
   fxpost=exp(-xpost)-xpost;
   xpre=x;
   x=xpost;
   disp([i',xpre',x',fxpre',fx',xpost',fxpost']);
   if(fxpost<.01 && fxpost>-.001)
       fprintf('The root is: %f',xpost)
       break;
   end 
   
end


