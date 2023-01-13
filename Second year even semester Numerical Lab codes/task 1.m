clc
clear all
Xi=1;
disp('    IT No.      Xi       F(Xi)    dF(Xi)     Xi+1');
disp('__________________________________________________');
for i=1:1:100
    Fxi=exp(-Xi)-Xi;
    F_xi=-exp(-Xi)-1;
    Xi1=Xi-(Fxi/F_xi);
    
    disp([i',Xi',Fxi',F_xi',Xi1']);
    if( abs(Xi-Xi1)<=0.001)
        fprintf('The root is: %f',Xi1)
        break ; 
    end 
    Xi=Xi1;
end