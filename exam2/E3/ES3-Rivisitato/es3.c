#include <stdio.h>

int sequenza(FILE *f);

int main (void)
{
    FILE *fin;
    int len;
    if((fin = fopen("source.txt","r"))==NULL)
    {
        printf("Errore di apertura");
        return 1;
    }
    len = sequenza(fin);
    printf("La lunghezza massima e: %d\n",len);
    fclose(fin);
    return 0;
}

int sequenza(FILE *f)
{
    int primo=1,numero,i,precedente,max=0;
    //La condizione (fscanf(f,"%d",&numero)==1) significa che HA LETTO CON SUCCESSO IL VALORE NUMERICO, dopo punto e virgola fa 2 assegnazioni
    for(i=0;fscanf(f,"%d",&numero)==1;primo=0,precedente=numero)
    //Se il numero non è il 'primo e il precedente è uguale al numero attuale letto
    if(!primo && numero==precedente)
    {
        i++;
        if(i>max)
        {
            max=i;
        }
    }
    //altrimenti ritorna da capo a 1 per ricontare
    else
    {
        i=1;
    }
    return max;
}