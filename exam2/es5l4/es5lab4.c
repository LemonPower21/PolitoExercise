#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char lett,temp;
    char vett[30];
    int contaespr=1,contanum=0,contapar=0,contaoperat=0,check=1;
    FILE *fin;
    if((fin=fopen("expr.txt","r"))==NULL)
    {
        printf("Errore di Lettura!");
    }

    while((fscanf(fin,"%c",&lett))!=EOF)
    {
        if(lett=='\n')
        {
            check=1;
            if(contapar%2!=0)
            {
                printf("Errore parentesi in espressione %d\n",contaespr);
            }
            else if(contaoperat<= contanum -2)
            {
                printf("Errore numero in espressione %d\n",contaespr);
            }
            else if(contaoperat== contanum)
            {
                printf("Errore operando in espressione %d\n",contaespr);
            }
            contanum=0,contapar=0,contaoperat=0;
            contaespr++;
        }
        else if(lett=='(' || lett==')')
        {
            contapar++;
            check=1;
        }
        else if(lett=='+' || lett=='-' || lett=='*' || lett=='/' || lett=='%')
        {
            contaoperat++;
            check=1;
        }
        else if(lett==' ')
        {
            check=1;
        }
        else if(isalnum(lett) && check)
        {
                contanum=contanum+1;
                check=0;
        }
    }
    return 0;
}