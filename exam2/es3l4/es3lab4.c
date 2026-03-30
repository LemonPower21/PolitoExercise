#include <stdio.h>
#include <ctype.h>

#define finf "input.txt"
#define foutf "output.txt"

int main(void)
{
    FILE *fin;
    FILE *fouttemp;
    FILE *fout;
    fouttemp = fopen("temp.txt","w");

    char car,converted,tempi;
    int temp,counter=0,cond_maiusc=0;
    if((fin = fopen(finf,"r"))==NULL)
    {
        printf("Errore di lettura file!");
    }
    if((fout=fopen(foutf,"w"))==NULL)
    {
        printf("Errore di scrittura file");
    }
    while((car=fgetc(fin))!=EOF)
    {
        if(isdigit(car))
        {
            fprintf(fouttemp,"*");
        }
        else if(car=='.' || car=='?' || car =='!')
        {
            fprintf(fouttemp,"%c",car); 
            if((temp=fgetc(fin))!=EOF)
            {
                if(temp!=' ' || temp!='\n')
                    fprintf(fouttemp," ");               
            }
            cond_maiusc=1;
            continue;
        }
        else if(cond_maiusc && isalpha(car))
        {
            converted = toupper(car);
            fprintf(fouttemp,"%c",converted);
            cond_maiusc=0;
        }
        else
        {
            fprintf(fouttemp,"%c",car);
        }
    }
    fclose(fouttemp);

    fouttemp = fopen("temp.txt","r");
    while((car=fgetc(fouttemp))!=EOF)
    {
        counter++;
        if(car!='\n')
            fputc(car,fout);
        else if(car=='\n')
        {
            tempi = counter;
            while(tempi<=25)
            {
                fprintf(fout," ");
                tempi++;
            }
            fprintf(fout,"| c: %d",counter);
            fputc('\n',fout);
            counter=0;
        }
        if(counter==25)
        {
            fprintf(fout,"| c: %d\n",counter);
            counter=0;
        }
    }
    fclose(fin);
    fclose(fout);
    fclose(fouttemp);
    return 0;
}