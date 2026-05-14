#include <stdio.h>
void SelectionSort(int vettore[],int n)
{
    printf("SelectionSort");
    int it_est=0,it_int=0,scambi=0,it_int_perciclo=0,totit=0;
    for(int i=0;i<n;i++)
    {
        it_int_perciclo=0;
        it_est++;
        int indexmin=i;
        for(int j=i+1;j<n;j++)
        {
            it_int_perciclo++;
            if(vettore[j]<vettore[indexmin])
            {
                indexmin=j;
            }
        }
        totit +=it_int_perciclo;
        printf("\nInterazioni interne al passo %d sono %d",i+1,it_int_perciclo);
        if(i!=indexmin)
        {
            scambi++;
            int temp = vettore[i];
            vettore[i] = vettore[indexmin];
            vettore[indexmin] = temp;

        }
        totit = it_est + totit;
    }
    printf("\nTOTALI: %d, \nESTERNE: %d \nSCAMBI: %d\n",totit,it_est,scambi);
}
void InserctionSort(int vettore[],int n)
{
    printf("InserctionSort");
    int it_est=0,it_int=0,scambi=0,it_int_perciclo=0,totit=0;
    for(int i=1;i<n;i++)
    {
        it_int_perciclo=0;
        it_est++;
        int j=i-1;
        int temp = vettore[i];
        while(j>=0 && vettore[j]>temp)
        {
            it_int_perciclo++;
            totit++;
            vettore[j+1]=vettore[j];
            scambi++;
            j--;
        }
        vettore[j+1] = temp;
        printf("\nInterazioni interne al passo %d sono %d",i+1,it_int_perciclo);
    }
    totit =totit +it_est;
    printf("\nTOTALI: %d, \nESTERNE: %d \nSCAMBI: %d\n",totit,it_est,scambi);
}

int main(void)
{
    int num = 3;
    int vett[] = {3,4,1};
    //INVERTIRE PER TESTARE
    InserctionSort(vett,num);
    SelectionSort(vett,num);

}