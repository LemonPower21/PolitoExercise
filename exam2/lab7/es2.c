#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    FILE *fin,*fseq;
    if((fin=fopen("testo.txt","r"))==NULL || (fseq=fopen("sequenze.txt","r"))==NULL)
    {
        printf("Errore del file!");
    }
    else
    {
        char riga[200];
        char sottosequenza[25];
        int termini_dacontrollare;

        fscanf(fseq,"%d",&termini_dacontrollare);

        for(int i=0;i<termini_dacontrollare;i++)
        { 
            //PRENDO LA SOTTOSEQUENZA
            int contapos = 0;
            int occorrenze=0;
            fscanf(fseq,"%s",sottosequenza);
            int len = strlen(sottosequenza);

            char maiusc_sottoseq[25];
            char maiusc_riga[200];
            char parola[25];

            //CONVERTO TUTTO MAIUSCOLO SOTTO SEQUENZA E LA CHIUDO A DESTRA CON \0
            for(int i=0;i<strlen(sottosequenza);i++)
            {
                maiusc_sottoseq[i] = toupper(sottosequenza[i]);
            }
            maiusc_sottoseq[strlen(sottosequenza)] = '\0';


            //PRENDO LA RIGA
            rewind(fin);
            while(fgets(riga,200,fin)!=NULL)
            {
                //CONVERTO TUTTO MAIUSCOLO E CHIUDO A DESTRA CON \0
                for(int i=0;i<strlen(riga);i++)
                {
                    maiusc_riga[i] = toupper(riga[i]);
                }
                maiusc_riga[strlen(riga)] = '\0';

                //USO STRNCMP
                for(int k=0;k<strlen(maiusc_riga);k++)
                {
                    contapos=contapos+1;
                    if(strncmp(&maiusc_riga[k],maiusc_sottoseq,strlen(maiusc_sottoseq))==0 && occorrenze<=10)
                    {
                        int ic=0;
                        int controllaapostrofi=0;
                        while(isalnum(riga[k+ic]) || ispunct(riga[k+ic]))
                        {
                            parola[ic]=riga[k+ic];
                            if(ispunct(riga[k+ic]))
                            {
                                controllaapostrofi=1;
                            }
                            //SOMMO ALLA FINE
                            ic++;
                        }
                        parola[ic]='\0';
                        if(!controllaapostrofi)
                        {
                            printf("La parola %s è nella parola %s alla posizione %d\n",sottosequenza,parola,contapos);
                            occorrenze++;
                        }

                    }
                }

            }
        }
        }
    
    fclose(fin);
    fclose(fseq);
}