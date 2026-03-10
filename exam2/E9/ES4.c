#include <stdio.h>
#include <string.h>

int main(void)
{
    int x,y,r,rc;
    int conta=0,cp=0,cd=0;
    char vettore[256];
    int len;

    scanf("%d",&x);
    scanf("%d",&y);
    r = x * y;
    sprintf(vettore,"%d",(int)r);  //SPRINTF = sprintf(vettore,"%d",numero)
    len = strlen(vettore);         //#INCLUDE STRING && strlen(VETTORE) ritorna lunghezzastringa
    for(int i=0;i<len;i++)
    {
        rc = vettore[i]-'0';
        if(rc>=0 && rc<=9)
        {
            if(rc%2==0)
            {
                cp++;
            }
            else
            {
                cd++;
            }
            conta++;
        }
    }
    printf("Ci sono %d cifre e %d sono pari mentre %d sono dispari.",conta,cp,cd);
}