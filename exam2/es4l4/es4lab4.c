#include <stdio.h>
#include <ctype.h>
#include <limits.h>

#define finf "numeri.txt"

int main(void)
{
    char car;
    int a,b,check=0,scartati=0,i=0,min=INT_MAX,max=INT_MIN;
    int vettnum[20];
    float sum,diff,molt,div;
    FILE *fin;
    if((fin=fopen(finf,"r")) == NULL)
    {
        printf("Errore di lettura del file");
        return 1;
    }
    while((fscanf(fin,"%d%c",&a,&car))!=EOF)
    {
        if(car=='\n')
        {
            vettnum[i] = a;
            i++;
        }
        else if(car==' ')
        {
            if((fscanf(fin,"%d%c",&b,&car))!=EOF)
            {
                vettnum[i] = a;
                i++;
                vettnum[i] = b;
                i++;
                sum = a+b;
                diff = a-b;
                molt = a*b;
                div = (b!=0)? (a/b) : 0.1;
                check=1;
            }
        }
        if(check)
        {
            if(a==sum || a==diff || a==molt || a==div)
            check=0;
            else
            scartati++;
            check=0;
        }
    }
    for(int j=0;j<i;j++)
    {
        if(vettnum[j]<min)
        min=vettnum[j];
        if(vettnum[j]>max)
        max=vettnum[j];
    }
    printf("Scartati: %d",scartati);
    printf("\nMassimo: %d",max);
    printf("\nMinimo: %d",min);
    return 0;
}