%% ========================================================================
% SF2565 Program construction in C++ for Scientific Computing
% Project 3: Sophie Malmliden & Caroline Eriksson
% Date: November 2019
%% ========================================================================
clear all; close all; clc

% Load boundary files
load boundary_h.txt -ascii
load boundary_v.txt -ascii

% Load interior files
load interior_x.txt -ascii
load interior_y.txt -ascii

% Creating vertical grid lines
for i = 1:50 
   plot(interior_x(i,:),interior_y(i,:),'m')
   hold on
end

% Creating horizontal grid lines
for i = 1:20 
   plot(interior_x(:,i),interior_y(:,i),'m')
end

% Creating grid points
for i = 1:20
    for j = 1:50
        plot(interior_x(j,i), interior_y(j,i),'k.')
    end
end

% Marking boundary grid points with stars
plot(boundary_v(:,1), boundary_v(:,2),'k*', boundary_v(:,3), boundary_v(:,4),'k*')
plot(boundary_h(:,1), boundary_h(:,2),'k*', boundary_h(:,3), boundary_h(:,4),'k*')
axis([-11 6 -1 4]);


