#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[])
{
    FILE *fin;
    if((fin=fopen("mat.txt","r"))==NULL)
    {
        printf("Errore di lettura file");
    }
    else
    {
        int r,c,index,shift;
        char stringa[100],sel[100],dir[100];
        fscanf(fin,"%d%d",&r,&c);
        int matrix[r][c];
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                fscanf(fin,"%d",&matrix[i][j]);
            }
        }
        while(strcmp(sel,"fine")!=0)
        {
            printf("Inserisci stringa: ");
            fgets(stringa,100,stdin);
            sscanf(stringa,"%s %d %s %d",sel,&index,dir,&shift);
            if(strcmp(sel,"fine")==0)
            {
                break;
            }
            else if(strcmp(sel,"riga")==0)
            {
                shift = shift % c;
                if(strcmp(dir,"destra")==0)
                {
                    for(int i=0;i<shift;i++)
                    {
                        int temp=matrix[index][c-1];
                        for(int k=c-1;k>=0;k--)
                        {
                            matrix[index][k]=matrix[index][k-1];
                        }
                        matrix[index][0]= temp;
                    }
                    for(int i=0;i<r;i++)
                    {
                        printf("\n");
                        for(int j=0;j<c;j++)
                        {
                            printf("%d \t",matrix[i][j]);
                        }
                    }

                }
                if(strcmp(dir,"sinistra")==0)
                {
                    for(int i=0;i<shift;i++)
                    {
                        int temp=matrix[index][0];
                        for(int k=0;k<c-1;k++)
                        {
                            matrix[index][k]=matrix[index][k+1];
                        }
                        matrix[index][c-1]= temp;
                    }
                    for(int i=0;i<r;i++)
                    {
                        printf("\n");
                        for(int j=0;j<c;j++)
                        {
                            printf("%d \t",matrix[i][j]);
                        }
                    }                    
                }
            }
            else if(strcmp(sel,"colonna")==0)
            {
                shift = shift % r;
                if(strcmp(dir,"su")==0)
                {
                    for(int i=0;i<shift;i++)
                    {
                        int temp=matrix[0][index];
                        for(int k=0;k<r-1;k++)
                        {
                            matrix[k][index]=matrix[k+1][index];
                        }
                        matrix[r-1][index]= temp;
                    }
                    for(int i=0;i<r;i++)
                    {
                        printf("\n");
                        for(int j=0;j<c;j++)
                        {
                            printf("%d \t",matrix[i][j]);
                        }
                    }          

                }
                if(strcmp(dir,"giu")==0)
                {
                    for(int i=0;i<shift;i++)
                    {
                        int temp=matrix[r-1][index];
                        for(int k=r-1;k>=0;k--)
                        {
                            matrix[k][index]=matrix[k-1][index];
                        }
                        matrix[0][index]= temp;
                    }
                    for(int i=0;i<r;i++)
                    {
                        printf("\n");
                        for(int j=0;j<c;j++)
                        {
                            printf("%d \t",matrix[i][j]);
                        }
                    }                      
                }
            }
        }
    }
    return 0;
}