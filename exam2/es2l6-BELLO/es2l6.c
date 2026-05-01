#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//DEFINISCO LE VARIABILI
typedef struct
{
    char ricodifica[201];
    char originale[201];
} dizionario; 

int main(void)
{
    FILE *fdiz, *fin, *fout;
    dizionario vettore[30];
    char riga[201];
    if((fdiz=fopen("dizionario.txt","r"))==NULL || (fin=fopen("sorgente.txt","r"))==NULL || (fout=fopen("ricodificato.txt","w"))==NULL)
    {
        printf("Errore generico di file!");
    }
    else
    {
        //LEGGO DIZIONARIO
        int dimdiz;
        fscanf(fdiz,"%d",&dimdiz);
        for(int i=0;i<dimdiz;i++)
        {
            fscanf(fdiz,"%s %s",vettore[i].ricodifica,vettore[i].originale);
        }
        //LEGGO SORGENTE RIGA PER RIGA USO FGETS PER PRENDERE SPAZI
        while((fgets(riga,201,fin))!=NULL)
        {
            //PARTENDO DA INIZIO RIGA FINO ALLA FINE
            for(int k=0;riga[k]!='\0';)
            {
                int trovato=0;
                //CONSULTANDO OGNI PAROLA DEL DIZIONARIO
                for(int j=0;j<dimdiz;j++)
                {
                    int lunghezza = strlen(vettore[j].originale);
                    //SE LA TROVO SCRIVO LA RICODIFICA E MI SPOSTO LUNGHEZZA POSTI AVANTI
                    if(strncmp(&riga[k],vettore[j].originale,lunghezza)==0)
                    {
                        fprintf(fout,"%s",vettore[j].ricodifica);
                        trovato = 1;
                        k=k+lunghezza;
                    }
                }
                //ALTRIMENTI SE NON LA TROVO SCRIVO IL CARATTERE K-ESIMO DELLA RIGA
                if(!trovato)
                {
                    fputc(riga[k],fout);
                    k++;
                }
            }
        }
    }
    fclose(fin);
    fclose(fout);
    fclose(fdiz);
    return 0;
}