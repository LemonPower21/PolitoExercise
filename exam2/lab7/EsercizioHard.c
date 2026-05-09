#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef enum {date, partenza, capolinea, ritardo, ritardo_tot,fine,errore} comandi;
typedef struct
    {
    char cod_tratta[30];
    char partenza[30];
    char destinazione[30];
    char data[30];
    char orario_partenza[30];
    char orario_arrivo[30];
    int ritardo;
    } corsa ;

comandi leggiComando(char comando[30])
{
    if(strcmp(comando,"date")==0)
    {
        return date;
    }
    if(strcmp(comando,"partenza")==0)
    {
        return partenza;
    }
    if(strcmp(comando,"capolinea")==0)
    {
        return capolinea;
    }
    if(strcmp(comando,"ritardo")==0)
    {
        return ritardo;
    }
    if(strcmp(comando,"ritardotot")==0)
    {
        return ritardo_tot;
    }
    if(strcmp(comando,"fine")==0)
    {
        return fine;
    }
    else
    {
        return errore;
    }
}

void menuparola(corsa vettorez[], comandi command, int ncorse,char p1[],char p2[],char p3[])
{
    switch (command)
        {
        case date:
            if(strlen(p2)!=0 && strlen(p3)!=0)
            {
                for(int i=0;i<ncorse;i++)
                {
                    if(strcmp(vettorez[i].data,p2)>=0 && strcmp(p3,vettorez[i].data)>=0)
                    {
                        printf("\n%s %s %s %s %s %s %d\n\n",vettorez[i].cod_tratta,vettorez[i].partenza,vettorez[i].destinazione,vettorez[i].data,vettorez[i].orario_partenza,vettorez[i].orario_arrivo,vettorez[i].ritardo);
                    }
                }
            }
            else{
                printf("Errore parametro 1 e 2!");
            }
        break;            
        break;
        case partenza:
            if(strlen(p2)!=0)
            {
                for(int i=0;i<ncorse;i++)
                {
                    if(strcmp(vettorez[i].partenza,p2)==0)
                    {
                        printf("\n%s %s %s %s %s %s %d\n\n",vettorez[i].cod_tratta,vettorez[i].partenza,vettorez[i].destinazione,vettorez[i].data,vettorez[i].orario_partenza,vettorez[i].orario_arrivo,vettorez[i].ritardo);
                    }
                }
            }
            else{
                printf("Errore parametro 2!");
            }
        break;
        case capolinea:
            if(strlen(p2)!=0)
            {
                for(int i=0;i<ncorse;i++)
                {
                    if(strcmp(vettorez[i].destinazione,p2)==0)
                    {
                        printf("%s %s %s %s %s %s %d",vettorez[i].cod_tratta,vettorez[i].partenza,vettorez[i].destinazione,vettorez[i].data,vettorez[i].orario_partenza,vettorez[i].orario_arrivo,vettorez[i].ritardo);
                    }
                }
            }
            else{
                printf("Errore parametro 2!");
            }
        break;
        case ritardo:

            for(int i=0;i<ncorse;i++)
            {
                if((vettorez[i].ritardo)!=0)
                {
                        printf("%s %s %s %s %s %s %d \n",vettorez[i].cod_tratta,vettorez[i].partenza,vettorez[i].destinazione,vettorez[i].data,vettorez[i].orario_partenza,vettorez[i].orario_arrivo,vettorez[i].ritardo);
                }
            }
        break;
        case ritardo_tot:
            if(strlen(p2)!=0)
            {
                int checked=0;
                int sumrit=0;
                for(int i=0;i<ncorse;i++)
                {
                    if(strcmp(vettorez[i].cod_tratta,p2)==0 && vettorez[i].ritardo!=0)
                    {
                        sumrit = sumrit + vettorez[i].ritardo;
                        checked=1;
                    }
                }
                if(checked)
                    printf("Il pulman %s ha ritardo complessivo %d",p2,sumrit);
                else
                    printf("Pulman inesistente o zero ritardo");
            }
            else{
                printf("Errore parametro 2!");
            }
        break;
        case fine:
            printf("Uscita dal programma in corso...");
        break;
        default:
            printf("Errore comando errato");
        break;
        }
}
int main(void)
{
    FILE *fin;
    if((fin=fopen("log.txt","r"))==NULL)
    {
        printf("Errore nella apertura/lettura del file!");
    }
    else
    {
        int ncorse;
        char complete[300],p1[30],p2[30],p3[30];
        fscanf(fin,"%d",&ncorse);

        corsa vettore[ncorse];
        for(int i=0;i<ncorse;i++)
        {
            fscanf(fin,"%s %s %s %s %s %s %d",vettore[i].cod_tratta,vettore[i].partenza,vettore[i].destinazione,vettore[i].data,vettore[i].orario_partenza,vettore[i].orario_arrivo,&vettore[i].ritardo);
        }
        printf("Inserisci il comando: \n");
        fgets(complete,100,stdin);
        sscanf(complete,"%s %s %s",p1,p2,p3);
        printf("%s %s %s",p1,p2,p3);
        comandi cmd = leggiComando(p1);
        menuparola(vettore,cmd,ncorse,p1,p2,p3);
    }
    fclose(fin);
    return 0;
}
