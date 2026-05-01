#include <stdio.h>
int main(void)
{
    FILE *fin;
    int n,m;
    int puntisq[20] = {0};
    if((fin = fopen("mat.txt","r"))==NULL)
    {
        printf("Errore in apertura!");
    }
    else
    {
        fscanf(fin,"%d%d",&n,&m);
        if(n>20 || m>20)
        {
            printf("File enorme!");
        }
        else
        {
            int matrix[n][m];
            //LEGGO MATRICE
            //n sono le squadre (righe)
            for (int i=0;i<n;i++)
            {
                //m sono le giornate (colonne)
                for(int j=0;j<m;j++)
                {
                    fscanf(fin,"%d",&matrix[i][j]);

                }
            }
            //ITERO SULLA MATRICE
            //itero giornata
            for (int i=0;i<m;i++)
            {
                int maxpunti=-1;
                int winner = -1;
                //itero squadre
                for(int j=0;j<n;j++)
                {
                    //ALLA GIORNATA I-ESIMA SOMMO I PUNTI PER OGNI SQUADRA J A QUELLI DEL GIORNO PRIMA
                    puntisq[j] += matrix[j][i];
                    if(puntisq[j]>maxpunti)
                    {
                        maxpunti=puntisq[j];
                        winner = j;
                    }

                }
                printf("A fine giornata %d il vincitore è %d\n",i+1,winner);
            }
        }

    }
    fclose(fin);
    return 0;
}