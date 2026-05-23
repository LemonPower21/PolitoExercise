#include <stdio.h>

void stampaCodifica (void *p, int size, int bigEndian, int matrice[][NCOLONNE], int MAXRIGHE)
{
    char *ptemp = (char *)p;
    if(!bigEndian)
    {
        for(int i=0; i<size;i++)
        {
            //DEFERENZIO PTEMP PER AVERE ACCESSO AL PRIMO BYTE (CHE SARA' UN NUMERO)
            unsigned int numero = *ptemp;
            int bit[8];

            //CALCOLO VARI BIT PARTENDO DAL NUMERO
            for(int posizione = 0; posizione < 8; posizione++)
            {
                bit[posizione] = numero % 2; 
                numero = numero / 2;         
            }

            //STAMPO AL CONTRARIO OGNI BYTE OTTENUTO (METODO DEI RESTI AL CONTRARIO)
            for(int posizione = 7; posizione >= 0; posizione--)
            {
                printf("%d", bit[posizione]);
            }
            
            printf(" "); // Spazio tra un byte e l'altro
            ptemp++;
        }
    }
    if(bigEndian)
    {
        //CI POSIZIONIAMO ALLA FINE
        ptemp = ptemp + (size - 1);
        for(int i=0; i<size;i++)
        {
            //DEFERENZIO PTEMP PER AVERE ACCESSO AL PRIMO BYTE (CHE SARA' UN NUMERO)
            unsigned int numero = *ptemp;
            int bit[8];

            //CALCOLO VARI BIT PARTENDO DAL NUMERO
            for(int posizione = 0; posizione < 8; posizione++)
            {
                bit[posizione] = numero % 2; 
                numero = numero / 2;         
            }

            //STAMPO AL CONTRARIO OGNI BYTE OTTENUTO (METODO DEI RESTI AL CONTRARIO)
            for(int posizione = 7; posizione >= 0; posizione--)
            {
                printf("%d", bit[posizione]);
            }
            
            printf(" "); // Spazio tra un byte e l'altro
            ptemp--;
        }
    }
}
int main(void)
{
    double ad;
    float af;
    int bigEndian=0;

    //PRIMA PARTE
    long unsigned int dimensioned = sizeof(ad);
    long unsigned int dimensionef = sizeof(af);
    // zu usato per stampare sizeof
    //lf usato per DOUBLE
    printf("La dimensione di DOUBLE è %zu BYTE cioè  %zu bit", sizeof(ad),dimensioned*8);
    printf("\nLa dimensione di DOUBLE è %zu BYTE cioè  %zu bit", sizeof(af),dimensionef*8);
    printf("\nInserire un numero DOUBLE: ");
    scanf("%lf", &ad);
    af = (float)ad;



    //SECONDA PARTE
    int test = 1;
    //Estraggo indirizzo di memoria di 'test' e lo converto in un puntatore a char cossicche mi possa muovere sui singoli byte
    //CASTING SUI PUNTATORI
    char *pchar = (char *)&test;
    if(pchar[0]==1)
    {
        printf("Little Endian\n");
    }
    else{
        printf("Big Endian\n");
        bigEndian=1;
    }

    //PASSO GLI INDIRIZZI DI MEMORIA
    stampaCodifica((void *)&af,sizeof(af),bigEndian);
    printf("\n\n");
    stampaCodifica((void *)&ad,sizeof(ad),bigEndian); 
    return 0;
}
