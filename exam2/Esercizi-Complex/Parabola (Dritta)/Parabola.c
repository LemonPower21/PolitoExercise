#include <stdio.h>
#include <math.h>
const int NR=20, NC=80;
int main(void) 
{

//a,b,c (Coeff parabola) x,y(scorrono) passo(definiscono scrorrimentyo)  min,max(Definiscono gli estremi di scorrimento)
float a, b, c, x, y, passoX, passoY,
xmin, xmax, ymin, ymax;
//Indici
int i, j;
//Definisco tabella (andra nel file)
char pagina[NR][NC];
FILE *fpout = fopen("out.txt","w");
printf("Coefficienti (a b c): ");
scanf("%f%f%f",&a,&b,&c);
printf("Intervallo ascisse (xmin xmax): ");
scanf("%f%f",&xmin,&xmax);
printf("Intervallo ordinate (ymin ymax): ");
scanf("%f%f",&ymin,&ymax);

//Inizializzo la tabella
for (i=0; i<NR; i++)
{
    for (j=0; j<NC; j++)
        pagina[i][j] = ' ';
}


//Definisco il passo (estrem)/ncol o (estremi)/nrighe (SOTTRAGGO 1 PERCHE' PARTO DA ZERO)
passoX = (xmax-xmin)/(NC-1);
passoY = (ymax-ymin)/(NR-1);
/* calcola punti della parabola */
for (j=0; j<NC; j++) 
{
    //DA QUI CAPIAMO CHE NECESSARIAMENTE INVERTIREMO LA LETTURA DELLE RIGHE
    x = xmin + j*passoX; //FACCIO SCORRERE LA X (INDIVIDUATO DALLE COLONNE)
    y = a*x*x + b*x + c;
    if (y>=ymin && y<=ymax) //CONTROLLO CHE Y SIA NEGLI ESTREMI (SE SI ALLORA CALCOLO L'ORDINATA (i) DOVE METTERLO)
    {
        i = (y-ymin)/passoY;
        pagina[i][j] = '*'; //STAMPO GLI ASTERISCHI SULLA STESSA RIGA IN COLONNE ADIACENTI FINCHE' L'ALTEZZA ME LO PERMETTE (LA STAMPA DIPENDE IN FIN DEI CONTI DA X)
    }
}

//SCORRO SU RIGHE E COLONNE E AGGIUNGO AL FILE
for (i=NR-1; i>=0; i--) //PARTO DAL BASSO PERCHE' ALTRIMENTI AVREI PARABOLA CAPOVOLTA (CONCAVITA' ERRATA AVREI)
{
    for (j=0; j<NC; j++)
        fprintf(fpout,"%c",pagina[i][j]);
    fprintf(fpout,"\n");
}
fclose(fpout);
}
