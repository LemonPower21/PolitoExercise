#include <stdio.h>

int InserctionSort(int vettore[],int n)
{
    //CONSIDERO A SINISTRA ORDINATO DUNQUE PARTO DA 1 
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int temp=vettore[i];
        //CONTROLLO CHE IL MIO ELEMENTO i-esimo (che sta a destra) SIA MINORE DELL ELEMENTO j-esimo (che sta a sx)... Se è vero SPOSTO A DESTRA DI UNO CIO CHE STA A SINISTRA
        while(j>=0 && temp<vettore[j])
        {
            vettore[j+1]=vettore[j];
            j--;
        }
        //L'ELEMENTO PIU' A DESTRA DEVE ESSERE QUELLO MAGGIORE CIOE' vettore[i] che sarebbe temp
        vettore[j+1] = temp;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",vettore[i]);
    }
    
}

int BubbleSort(int vettore[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            //CONFRONTA L'ATTUALE CON IL SUCCESSIVO  E SCAMBIA SPOSTANDO A DESTRA
            if(vettore[j]>vettore[j+1])
            {
                int temp = vettore[j+1];
                vettore[j+1] = vettore[j];
                vettore[j] = temp;
            }
        }
    }
    //PRINT
    for(int i=0;i<n;i++)
    {
        printf("%d ",vettore[i]);
    }
}

int SelectionSort(int vettore[],int n)
{
    //PARTO DALL'INIZIO E VADO FINO AD N-1
    for(int i=0;i<n-1;i++)
    {
        int temp;
        int posmin=i;
        //SCORRO VETTORE DA I+1 FINO ALLA FINE PER TROVARE MINIMO 
        for(int j=i+1;j<n;j++)
        { 
            //SE L'ELEMENTO J-ESIMO E' MINORE DI QUELLO I-ESIMO (SALVATO IN POS MINIMA) AGGIORNO LA POSIZIONE MINIMA A J
            if(vettore[j]<vettore[posmin])
            {
                posmin=j;
            }
        }
        //SE E' STATO RILEVATO UN CAMBIAMENTO DI POSIZIONE MINIMA AGGIORNO (ELEMENTO IESIMO CONTERRA' IL MINIMO EFFETTIVO MENTRE QUELLO IN POSMIN AVRA' QUELLO MAGGIORE)
        if(posmin!=i)
        {
            temp = vettore[i];
            vettore[i]=vettore[posmin];
            vettore[posmin]=temp;

        }
    }
    //PRINT
    for(int i=0;i<n;i++)
    {
        printf("%d ",vettore[i]);
    }
}

int CountingSort(int vettore[], int n, int range)
{
    int risultato[n];
    int occorrenze[range];
    for(int x=0;x<range;x++)
    {
        occorrenze[x]=0;
    }
    //CALCOLO OCCORRENZE SEMPLICI
    for(int i=0;i<n;i++)
    {
        occorrenze[vettore[i]]++;
    }
    //CALCOLO OCCORRENZE MULTIPLE
    for(int j=1;j<range;j++)
    {
        occorrenze[j] += occorrenze[j-1];
    }
    //SVOLGO A AL CONTRARIO E SALVO TEMPORANEAMENTE IN risultato
    for(int k=n-1;k>=0;k--)
    {
        risultato[occorrenze[vettore[k]]-1]=vettore[k];
        occorrenze[vettore[k]] -=1;
    }
    //SALVO IN VETTORE
    for(int i=0;i<n;i++)
    {
        vettore[i] =risultato[i];
    }
    // STAMPO
    for(int i=0;i<n;i++)
    {
        printf("%d ",risultato[i]);
    }
}

int main(void)
{
    int vettorez[] = {1,2,3,7,6,8,9,4,2,0};
    int n = 9;
    //USARNE UNO ALLA VOLTA
    InserctionSort(vettorez,n);
    printf("\n");
    BubbleSort(vettorez,n);
    printf("\n");
    SelectionSort(vettorez,n);
    printf("\n");
    CountingSort(vettorez,n,10);
}
