#include <stdio.h>
#include <string.h>

int main (void)
{
    int x,y,p;
    printf("Scrivi X: ");
    scanf("%d",&x);
    printf("Scrivi Y: ");
    scanf("%d",&y); 
    p = x*y;
    printf("%d * %d = %d",x,y,p);
    int ncifre,npari,ndisp=0;
    for(ncifre=npari=0;p!=0; p/=10,ncifre++)
    {
            int unita = p%10;
            if(unita%2==0)
                npari++;
    }
    ndisp = ncifre-npari;
    printf("\nHo bisogno di %d cifre di cui %d pari e %d dispari",ncifre,npari,ndisp);
}