%Esercitazione 0 A
clear all %cancella le variabili
clc %Pulisce command window
close all %chiude le finestre aperte


%operazioni
s=3+5
%se metto (;) BLOCCO OUTPUT
t = 3^5;

%vettori
v = [3,pi,i] %vettore riga
w = [0;-7;exp(1)]  %vettore colonna (2 modi)
u = [7
     6
     5]

%operazioni vettoriali
v1 = 3*v
somma = w+u %solo riga-riga o colonna-colonna


%disegnare
x = linspace(0,2*pi,100)   %100 PUNTI EQUISPAZIATI DA 0 A 2TT
y = sin(x)
plot(x,y,'-*r')  %disegna con trattini a stelline rosse