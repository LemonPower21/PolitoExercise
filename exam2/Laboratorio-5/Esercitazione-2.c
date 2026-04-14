#include <stdio.h>
#define maxN 30
void ruota(int v[maxN], int N, int P, int dir);

int main(void)
{
    int N,temp;
    printf("Inserire dimensione: ");
    //COSTO UNDEFINED
    while(N<=0 || N>maxN)
    {
        scanf("%d",&N);
        if(N<=0 || N>maxN)
            printf("Inserire dimensione valida: ");
    }
    int V[N];
    //COSTO THETA(N)
    for (int i=0;i<N;i++)
    {
        printf("Inserire elemento per vettore: ");
        scanf("%d",&temp);
        V[i]=temp;
    }
    ruota(V,N,1,1);
    return 0;
}

void ruota(int v[maxN], int N, int P, int dir)
{
    int temp;
    //COSTO THETA(N^2)
    while(P>0)
    { 
        if(dir==1) //SINISTRA
        {
            //COPIO PRIMA VARIABILE E POI LA METTO NELL'ULTIMA
            temp = v[0];
            //PARTENDO DALLA SUCCESSIVA SPOSTO TUTTO A SINISTRA
            for(int j=1;j<N;j++)
            {
                v[j-1]=v[j];
            }
            //COPIO PRIMA VARIABILE E POI LA METTO NELL'ULTIMA
            v[N-1]=temp;
        }
        else if(dir==-1) // DESTRA
        {
            //COPIO ULTIMA E LA METTO NELLA PRIMA
            temp = v[N-1];
            //PARTENDO DA QUELLA INIZIO A SPOSTAE A DESTRA
            for(int j=N-1;j>0;j--)
            {
                v[j]=v[j-1];
            }
            v[0]=temp;
        }
    P--;
    }
    for(int k=0;k<N;k++)
    {
        printf("%d",v[k]);
    }

}
