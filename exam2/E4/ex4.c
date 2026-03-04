#include <stdio.h>
#define P 3.14
int main (void)
{
    float diagq,latoq,raggio,diam,area;
    int c,c1;
    printf("Inserire 1) QUADRATO 2) CERCHIO: ");
    scanf("%d",&c);
    if(c==1)
    {
        printf("Calcolare con 1)DIAGONALE 2)LATO: ");
        scanf("%d",&c1);
        if(c1==1)
        {
            printf("Inserire diagonale: ");
            scanf("%f",&diagq);
            area = diagq*(diagq/2);
            printf("L'area e' %.2f",area);
        }
        if(c1==2)
        {
            printf("Inserire lato: \n");
            scanf("%f",&latoq);
            area = latoq*latoq;
            printf("L'area e' %.2f",area);
        }

    }
    if(c==2)
    {
        printf("Calcolare con 1)DIAMETRO 2)RAGGIO: \n");
        scanf("%d",&c1);
        if(c1==1)
        {
            printf("Inserire diametro: \n");
            scanf("%f",&diam);
            area = P*diam*(diam/4);
            printf("L'area e' %.2f",area);
        }
        if(c1==2)
        {
            printf("Inserire lato: \n");
            scanf("%f",&raggio);
            area = P*raggio*raggio;
            printf("L'area e' %.2f",area);
        }
    }
    return 0;
}