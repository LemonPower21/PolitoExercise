#include <stdio.h>
#define N 37
int main(void)
{
    int temp=0;
    int v[37] = {
    54, -12, 88, 3, 0, 45, 102, -5, 22, 7, 
    33, 19, 67, 45, -30, 11, 9, 81, 4, 15, 
    99, 2, 56, -1, 14, 28, 73, 6, 10, 42, 
    37, 21, 5, 13, 90, -18, 25
    };
    int i, j, l=0, r=N-1;
    //CICLO ESTERNO, VADO A DESTRA
    for (i = 1; i < N; i++) 
    {
        // SALVO TEMPORANEMAENTE LA CASELLA I-ESIMA, J E' QUELLA PRECEDENTE
        temp = v[i];
        j = i -1;
        // SCORRO DA I-1 ALL'INIZIO (SE TEMP E' PICCOLA RISPETTO v[j] SIGNIFICA CHE DEVO CONTINUARE AD ANDARE A SINISTRA)
        while(j>=0 && temp<v[j])
        {
            //CONTINUO A SCORRERE
            v[j+1] = v[j];
            j--;
        }
        //ELEMENTO "DESTRO" DIVENTA PROPRIO LA NOSTRA VARIABILE (temp>v[j]) QUINDI in v[j+1] metto temp
        v[j+1]=temp;
    }
    for (int i=0; i<N;i++)
    {
        printf("%d ",v[i]);
    }
    return 0;
}