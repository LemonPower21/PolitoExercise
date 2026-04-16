#include <stdio.h>

int main(void)
{
    int imax,jmax,somma=0,max=0;
    int r,c;
    char carattere_num;
    FILE *fin;
    if((fin=fopen("matrice.txt","r"))==NULL)
    {
        printf("Errore in lettura!");
        return 1;
    }
    if(fscanf(fin,"%d %d",&r,&c)==2)
    {
       printf("Dati tabella presi correttamente!\n");
    }
    int matrix[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            fscanf(fin,"%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<r-1;i++)
    {
        for(int j=0;j<c-1;j++)
        {
            printf("%d %d\n%d %d\n\n",matrix[i][j],matrix[i][j+1],matrix[i+1][j],matrix[i+1][j+1]);
            somma = matrix[i][j]+matrix[i][j+1]+matrix[i+1][j]+matrix[i+1][j+1];
            if(somma >= max)
            {
                max = somma;
                imax = i;
                jmax = j;
            }
        }
    }
    printf("La somma massima è %d :\n %d %d\n%d %d",max,matrix[imax][jmax],matrix[imax][jmax+1],matrix[imax+1][jmax],matrix[imax+1][jmax+1]);
}
