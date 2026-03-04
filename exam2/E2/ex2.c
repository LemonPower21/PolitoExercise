#include <stdio.h>
int main(void)
{
    FILE *fin, *fout;
    char f,s;
    if((fin = fopen("guide.txt","r")) == NULL)
    {
        printf("Errore in apertura 1");
    }
    if((fout = fopen("output.txt","w")) == NULL)
    {
        printf("Errore in apertura 2");
    }
    printf("Vuoi stampare in console (C) o in file (F)");
    scanf("%c",&s);
    while (!feof(fin))
    {
        if(!feof(fin))
        {
            f = fgetc(fin);
            switch(s)
            {
                case 'C':
                    printf("\nCarattere stampato in console: %c",f);
                    break;
                case 'F':
                    fputc(f,fout);
                    printf("\nCarattere salvato nel file: ");
                    putchar(f);
                    break;
                default:
                    printf("Errore generico!");
            }
        }
    }
    fclose(fin);
    fclose(fout);
}