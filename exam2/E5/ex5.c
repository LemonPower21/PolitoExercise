#include <stdio.h>
int main(void)
{
    float x,y,res;
    int op;
    printf("Scegli cosa fare 1)+ 2)- 3)* 4)DIV: ");
    op = getchar();
    printf("Inserire X: ");
    scanf("%f",&x);
    printf("Inserire Y: ");
    scanf("%f",&y);
    switch(op)
    {
        case '1':
            res = x+y;
            printf("Risultato: %.2f",res);
        break;
        case '2':
            res = x-y;
            printf("Risultato: %.2f",res);
        break;
        case '3':
            res = x*y;
            printf("Risultato: %.2f",res);
        break;
        case '4':
            res = x/y;
            printf("Risultato: %.2f",res);
        break;
        default:
            printf("Errore");
    }
}
