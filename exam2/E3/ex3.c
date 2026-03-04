#include <stdio.h>

int main(void)
{
    FILE *fread,*fodd,*feven;
    char fstring[100],nome[20];
    int c = 0;
    if((fread=fopen("bronte.txt","r"))==NULL)
    {
        printf("Errore apertura file");
    }
    if((fodd=fopen("odd.txt","w"))==NULL)
    {
        printf("Errore apertura file");
    }
    if((feven=fopen("even.txt","w"))==NULL)
    {
        printf("Errore apertura file");
    }
    printf("Inserire il tuo nome: ");
    gets(nome);
    while(!feof(fread))
    {
        c++;
        if(c%2==0)
        {
            fscanf(fread,"%s",fstring);
            if(!feof(fread))
            {
                printf("\nSto leggendo:\n%s\n\n",nome,fstring);
                fprintf(feven,"%s",fstring);

            }
        }
        else
        {
            fgets(fstring,100,fread);
            if(!feof(fread))
            {
                puts(nome);
                puts("Sto leggendo: ");
                puts(fstring);
                fputs(fstring,fodd);
            }
        }
    }
    fclose(fodd);
    fclose(feven);
    fclose(fread);
}