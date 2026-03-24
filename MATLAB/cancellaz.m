%SCARICATI
clear all
clc
close all

format short

n = 1:14;
xx = 10.^(-n)

fn = (1-cos(xx))./(xx).^2
fn_solved = 0.5*(sin(xx/2)./(xx/2)).^2

[xx',fn']
[xx',fn_solved']