#include <stdio.h>

void sottoSequenze(int N,int V[])
{
    int tempcounter=0,len_max,iteratore=0;
    //COSTO THETA(N)
    for (int i=0;i<N;i++)
    {
        if(V[i]!=0)
        {
            tempcounter++;
        }
        if(V[i]==0)
        {
            tempcounter=0;
        }
        if(tempcounter>len_max)
            len_max=tempcounter;
    }
    //COSTO THETA(N)
    for (int i=0;i<N;i++)
    {
        if(V[i]!=0)
        {
            iteratore++;
        }
        else
        {
            iteratore=0;
        }
        if(iteratore == len_max)
        {
            for(int k=i-iteratore+1;k<=i;k++)
            printf("%d\t",V[k]);
        }
    }
    

}
int main(void)
{
    int temp,N=66;
    while(N<=0 || N>=30)
    {
        printf("Inserire un numero tra 1 e 30 (Lunghezza del vettore): ");
        scanf("%d",&N);
    }
    int V[N];
    //COSTO THETA(N)
    for(int j=0;j<N;j++)
    {
        printf("Inserire elemento del vettore: ");
        scanf("%d",&temp);
        V[j] = temp;
    }
    sottoSequenze(N,V);
    return 0;
}