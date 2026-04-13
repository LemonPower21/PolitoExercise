#include <stdio.h>
#define N 10000
int main(void)
{
    int i,t,p,q,id[N];
    //INIZIALIZZO VETTORE COSTA O(N)
    for (i=0;i<N;i++)
        id[i]=i;

    //PRENDO IN INPUT I DUE NUMERI INDICI
    printf("Inserisci la coppia P Q:  ");
    while((scanf("%d %d",&p,&q))==2)
    {
        /* OPERAZIONE DI FIND:
           Accesso diretto all'array tramite indice.
           Costo: \Theta(D-(N-1)) - Costante
        */
        //SE ENTRAMBI I VALORI DEL VETTORE AGLI INDICI P && Q COINCIDONO ALLORA SONO CONNESSI
        if(id[p]==id[q])
        {
            printf("I due nodi sono già connessi");
        }










        /* OPERAZIONE DI UNION:
           Contiene un ciclo for che scorre SEMPRE tutto l'array id[N].
           Costo: (N-1)Theta(N)
        */
        //ALTRIMENTI APPLICO SOSTITUZIONE (FACCIO SCORRERE VETTORE FINO ALLA FINE && Se trovo id[i]==id[p] assegno a id[i] il valore di id[q] )
        else
        {
            // 1. Salviamo l'identificativo originale di P in una variabile temporanea 't'.
            // 2. Scorriamo tutto l'array dall'inizio alla fine (0 a N).
            for(t=id[p],i=0; i<N ; i++)
                {
                    // 3. Se troviamo un nodo 'i' che appartiene al gruppo di P (id[i] == t) (cambia tutti i valori id[p] in id[q] )
                    if(id[i]==t)
                    {
                        // 4. lo spostiamo nel gruppo di Q.
                        id[i]=id[q];
                    }
                }
        printf("Nodi %d %d ancora non connessi\n",p,q);
        }
        printf("Inserisci nodi P Q: ");
    }
}