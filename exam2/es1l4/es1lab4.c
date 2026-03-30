#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main (void)
{   
    FILE *fin;
    FILE *fout;
    char carattere_prec='\0',carattere_attuale;
    int counter=0,check=0;
    if((fin=fopen("source.txt","r"))==NULL)
    {
        printf("Errore in apertura file input!");
    }
    if((fout=fopen("compressed.txt","w"))==NULL)
    {
        printf("Errore in apertura file output!");
    }
    while((carattere_attuale=fgetc(fin))!=EOF)
    {
        if(carattere_prec==0)
        {
            carattere_prec=carattere_attuale;
            fputc(carattere_attuale,fout);
        }
        else
        {
            if(carattere_attuale==carattere_prec)
            {
                counter = counter+1;
                check = 1;
                if(counter==9)
                {
                    fprintf(fout,"%c$%d",carattere_prec,counter);
                    counter=0;
                }
            }
            else if(carattere_attuale!= carattere_prec && check==1)
            {

                check=0;
                fprintf(fout,"%c$%d",carattere_prec,counter);
                fputc(carattere_attuale,fout);
                counter = 0;
            }
            else
            {
                fputc(carattere_attuale,fout);
                counter = 0;
            }
            carattere_prec = carattere_attuale;
        }
    }
    fclose(fout);
    fclose(fin);
    return 0;
}