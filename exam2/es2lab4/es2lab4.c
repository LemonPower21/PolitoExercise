#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
    FILE *fin,*fout;
    char c,cn,cprec='\0';
    int k=0,salto=0;
    if((fin=fopen("base.txt","r"))==NULL)
    {
        printf("Errore in apertura del file di input");
    }
    if((fout=fopen("cifred.txt","w"))==NULL)
    {
        printf("Errore in apertura del file di input");
    }
    while((c = fgetc(fin)) !=EOF)
    {
        cn = c;
        salto = 0;
        if(isalpha(cn))
        {
            if(isalpha(cprec))
            {
                if(isupper(cprec))
                {
                    salto = cprec -'A'; //CALCOLA SOLO DECREMENTO
                }
                else
                {
                    salto = cprec - 'a';  //CALCOLA SOLO INCREMENTO 116-97 = 19   108-97 = 9
                }
            }
            if(isupper(cn))
            {
                cn = (c+salto - 'A')%26 + 'A';
            }
            else
            {
                cn = (c+salto -'a')%26 + 'a';
            }
        }
        else if(isdigit(cn))
        {
            int valore_num_dascrivere = (c-'0' + k) % 10;
            cn = valore_num_dascrivere + '0';    //PASSO DA NUMERO A ASCII CHE DESCRIVE NUMERO
            k = (k+1)%10;
        }
        //DEVO METTERE CN NEL TESTO
        fputc(cn,fout);
        cprec = c;
    }
    fclose(fin);
    fclose(fout);
    return 0;
}