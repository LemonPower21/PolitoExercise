#include <stdio.h>
int main(void)
{
    int a,b,temp,i=0,stop=1;
    int caso;
    printf("Inserire A e B e trovero' MCD: ");
    scanf("%d",&a);
    scanf("%d",&b);
    while(stop!=0)
    {
            stop = a%b;
            if(stop!=0)
            {
                a=b;
                b=stop;
            }

    }
    printf("%d",b);
}