#include <stdio.h>
int main (void)
{
    int x,y;
    float z;
    printf("Inserisci numero: ");
    scanf("%d ",&x);
    y = 3;
    z = (float)(x)/y;
    printf("%d/%d=%.3f\n",x,y,z);
    return 0;
}