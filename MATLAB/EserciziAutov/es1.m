%RETTA MINIMI QUADRATI (SISTEMA SOVRADETERMINATO) (SLIDES98)

clear all
clc
close all
%Ac =B
%Rc = (Q^-1)B
x = [0,0.06,0.14,0.25,0.31,0.47,0.60,0.70];
y = [0,0.08,0.14,0.20,0.23,0.25,0.28,0.29];

m=length(x); %QUANTI ELEMENTI HA X
%MATRICE DEI COEFFICIENTI
A = [x',ones(m,1)];
rango = rank(A); %ESSENGO MASSIMO UTILIZZO QR
b=y'; %MATRICE COLONNA DEI TERMINI NOTI

n=size(A,2) %NUMERO COLONNE DI A (1=RIGHE , 2=COLONNE)
[Q,R] = qr(A)

%CALCOLO Qt*B = Q-1*B = R*c
c_temp = Q'*b
%NE PRENDO LA PARTE QUADRATA
c1 = c_temp(1:n)

%CALCOLO ORA C DOPO AVER FATTORIZZATO
c = R(1:n,1:n)\c1


%ho trovato c(1)=0.37 e c(2)=0.0654 e definisco retta p

p =@(x)  c(1).*x +c(2)  %DEFINISCO LA FUNZIONE RETTA 

%definisco punti ascisse che usero (da 0 ad 1 100 punti)
xx = linspace(0,1,100);

%calcolo retta (matematicamente ho) y=p(x) 
p_eval = p(xx)
%stampo la mia retta
plot(x,y,'o',xx,p_eval,'r-')




%si poteva fare (RANGO DEVE ESSERE MASSIMO ALTRIMENTI NON FUNZIONA)
cm1=A\b
%metodo polyfit (PRENDE LA SOLUZIONE CON PIU' ZERI NOI PRENDIAMO QUELLO
%VICINO AD ORIGINE
cm2 = polyfit(x,y,1) %RISOLVO CON LA RETTA
