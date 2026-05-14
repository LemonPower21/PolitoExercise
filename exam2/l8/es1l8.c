#include <stdio.h>
int main(void)
{
    FILE *fin;
    if((fin=fopen("input.txt","r"))==NULL)
    {
        printf("Errore di apertura del file!");
    }
    else
    {
        int nc,nr;
        int b=0,h=0,hmax=0,bmax=0,amax=0;
        //riga,colonna, dimensione base, dimensione altezza, area
        int vetthmax[5], vettbmax[5],vettareamax[5];
        fscanf(fin,"%d %d",&nr,&nc);
        int tabella[nr][nc];
        //SCRIVO TABELLA
        for(int i=0;i<nr;i++)
        {
            for(int j=0;j<nc;j++)
            {
                fscanf(fin,"%d",&tabella[i][j]);
            }
        }
        //LEGGO TABELLA;
        for(int i=0;i<nr;i++)
        {
            b=0;
            h=0;
            for(int j=0;j<nc;j++)
            {
                //CONTROLLO COSI DATA L'ENTITA DEL PROBLEMA (NON CI CHIEDE DOVE SI TROVANO TUTTE LE FIGURE MA SOLO LE PIU GRANDI PER B,H,ALTEZZA)
                if(tabella[i][j]==1)
                {
                    b=0, h=0;
                    //MI MUOVO SULLA STESSA RIGA FINCHE TROVO 1 OPPURE FINISCE (ALLARGO LA BASE DI 1)
                    while((j+b)<nc && tabella[i][j+b]==1)
                    {
                        b = b +1;
                    }
                    //MI MUOVO SULLA STESSA COLONNA FINCHE TROVO 1 OPPURE FINISCE (ALLARGO H DI 1)
                    while((i+h)<nr && tabella[i+h][j]==1)
                    {
                        h = h +1;
                    }

                    //FACCIO TUTTI I CONTROLLI
                    if(b*h>amax)
                    {
                        amax = b*h;
                        vettareamax[0]=i;
                        vettareamax[1]=j;
                        vettareamax[2]=b;
                        vettareamax[3]=h;
                        vettareamax[4]=b*h;
                    }
                    if(b>bmax)
                    {
                        bmax=b;
                        vettbmax[0]=i;
                        vettbmax[1]=j;
                        vettbmax[2]=b;
                        vettbmax[3]=h;
                        vettbmax[4]=b*h;
                    }
                    if(h>hmax)
                    {
                        hmax=h;
                        vetthmax[0]=i;
                        vetthmax[1]=j;
                        vetthmax[2]=b;
                        vetthmax[3]=h;
                        vetthmax[4]=b*h;
                    }
                }
            }
        }
        //STAMPO
    printf("Area max; <%d,%d> b=%d, h=%d, A=%d",vettareamax[0],vettareamax[1],vettareamax[2],vettareamax[3],vettareamax[4]);   
    printf("\nBase max; <%d,%d> b=%d, h=%d, A=%d",vettbmax[0],vettbmax[1],vettbmax[2],vettbmax[3],vettbmax[4]);   
    printf("\nAltezza max; <%d,%d> b=%d, h=%d, A=%d",vetthmax[0],vetthmax[1],vetthmax[2],vetthmax[3],vetthmax[4]);   
    }

}