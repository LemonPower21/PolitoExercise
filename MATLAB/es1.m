clear all
clc
close all

x = [1:-0.1:0]  %decrementa nel ,modo (inizio:step:fine)

x([1,4,3])  %prendi elementi di un vettore x([a,b,c]) PRENDI ELEMENTI CON INDICE a b c 

x([1:2:7,10])=zeros(1,5)  %seleziona elementi da 1 a 7 con passo 2 e l'elemento 10 e assegnaci zero
zeros(1,5)  %crea vettore  1 riga di 5 elementi

x([1 2 5]) = [0.5*ones(1,2) -0.3]  %vettore del tipo [0.5,0.5,-0.3] assegnato a x in posizione 1,2,5
%se vettori sono diversi in lunghezza da errore (se a vettore assegni un
%numero non da errore )
ones(1,2)  %1 riga di 2 elementi fatto di uno


y = x([end:-1:1]) %inverte il vettore



