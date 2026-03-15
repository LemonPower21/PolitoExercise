#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    int gg,mm,aaaa;
    int bisestile=0;
    printf("Inserire la data gg/mm/aaaa: ");
    if((scanf("%d/%d/%d",&gg,&mm,&aaaa))==3)
    {
        printf("Input preso correttamente!\n");
    }
    else{
        printf("Input error!\n");
        return 1;
    }
    printf("Inserire numero di giorni da contare: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        //Verifica sull'anno
        if((aaaa%400==0) || (aaaa%4==0 && aaaa%100!=0))
        {
            bisestile=1;
        }
        else
        {
            bisestile=0;
        }
        switch(mm)
        {
            case 1:
                if(gg==31)
                {
                    gg=1;
                    mm=2;
                }
                else
                {
                    gg++;
                }
            break;
            case 2:
                if(bisestile)
                {
                    if(gg==29)
                    {
                        gg=1;
                        mm=3;
                    }
                    else
                    {
                        gg++;
                    }
                }
                else
                {
                    if(gg==28)
                    {
                        gg=1;
                        mm=3;
                    }
                    else
                    {
                        gg++;
                    }
                }
            break;
            case 3:
                if(gg==31)
                {
                    gg=1;
                    mm=4;
                }
                else
                {
                    gg++;
                }
            break;
            case 4:
                if(gg==30)
                {
                    gg=1;
                    mm=5;
                }
                else
                {
                    gg++;
                }
            break;
            case 5:
                if(gg==31)
                {
                    gg=1;
                    mm=6;
                }
                else
                {
                    gg++;
                }
            break;
            case 6:
                if(gg==30)
                {
                    gg=1;
                    mm=7;
                }
                else
                {
                    gg++;
                }
            break;
            case 7:
                if(gg==31)
                {
                    gg=1;
                    mm=8;
                }
                else
                {
                    gg++;
                }
            break;
            case 8:
                if(gg==31)
                {
                    gg=1;
                    mm=9;
                }
                else
                {
                    gg++;
                }
            break;
            case 9:
                if(gg==30)
                {
                    gg=1;
                    mm=10;
                }
                else
                {
                    gg++;
                }
            break;
            case 10:
                if(gg==31)
                {
                    gg=1;
                    mm=11;
                }
                else
                {
                    gg++;
                }
            break;
            case 11:
                if(gg==30)
                {
                    gg=1;
                    mm=12;
                }
                else
                {
                    gg++;
                }
            break;
            case 12:
                if(gg==31)
                {
                    gg=1;
                    mm=1;
                    aaaa++;
                }
                else
                {
                    gg++;
                }
            break;
        }
    }
    printf("%d/%d/%d",gg,mm,aaaa);
    return 0;
}