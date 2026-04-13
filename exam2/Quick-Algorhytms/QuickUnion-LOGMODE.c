#include <stdio.h>
#define N 10000


//VERSIONE NON OTTIMIZZATA IN TERMINI DI COSTI
int main(void)
{
    int i,j,p,q,id[N],sz[N];
    //INIZIALIZZO VETTORE COSTA O(N)
    for (i=0;i<N;i++)
        id[i]=i;
        sz[i]=1;

    //PRENDO IN INPUT I DUE NUMERI INDICI
    printf("Inserisci la coppia P Q:  ");
    while((scanf("%d %d",&p,&q))==2)
    {
    /* 1. RISALITA ALLA RADICE DI R:
       Stessa logica: cerchiamo il "capo" supremo del gruppo di q.
       Costo: O(h).
       Nel caso peggiore: \Theta(N)  (MI FERMO QUANDO i=id[i]  tipo 5 = id[5])
    */
        for(i=p;i!=id[i]; i=id[i]);

    /* 2. RISALITA ALLA RADICE DI Q:
       Stessa logica: cerchiamo il "capo" supremo del gruppo di q.
       Costo: O(h).
       Nel caso peggiore: \Theta(N)  (MI FERMO QUANDO j=id[j]  tipo 5 = id[5])
    */

        for(j=q;j!=id[j]; j=id[j]);



/* 3. CONTROLLO CONNETTIVITÀ:
       Se le radici i e j coincidono, i nodi appartengono allo stesso albero.
       Costo: \Theta(1)
    */
        if(i==j)
        {
            printf("Elementi gia' connessi! ");
        }

            /* 4. UNIONE (UNION):
       Colleghiamo la radice del primo albero direttamente alla radice del secondo.
       Questa operazione NON scorre l'array, cambia solo un valore.
       Costo: \Theta(1)
    */


        //Il piu piccolo si mergia al piu grande
        else
        {
            printf("Alberi non connessi");
            if(sz[i] <= sz[j])
            {
                id[i]=j;  //mergio albero i in j
                sz[j]+=sz[i]; //QUindi Dimensione di j aumenta di numero elementi contenuti in i
            }
            else
            {
                id[j]=i; //mergio albero j in in i
                sz[i]+=sz[j]; //Quindi dimensione dell'albero i aumenta di  numerto elementi contenuti in albero j
            }
        }
    }

}