clear, clc, close all 
% Work with values around center c
c = pi/2;
x = -4 : .1 : 6;
y = cos(x); 
% Plot the goal
plot(x, y, 'g', 'Linewidth', 3)
title('Study of Taylor series')
xlabel('x')
ylabel('cos(x) with different number of terms')
axis([-4 6 -3 3])
grid on
hold on 
% Consider 4 terms in the series
smp = taylor_cosine(c, x, 4);
plot(x, smp, 'ro') 
% Consider 6 terms
smp = taylor_cosine(c, x, 6);
plot(x, smp, 'b-.') 
% Consider 10 terms
smp = taylor_cosine(c, x, 10);
plot(x, smp, 'k', 'linewidth', 3) 
% Label the calculated lines
legend('cos(x)', '4-term series', ...
       '6 terms', '10 terms')
The results are:

We see that all of the Taylor expansions work well when we are close to pi/2 (x approx. 1.57). 
More terms approximate better a larger portion of the cosine curve.


