#include <stdio.h>
#include <string.h>
int main(void)
{
    char parola[21];
    char inversa[21];
    scanf("%s",parola);
    int len=strlen(parola);
    // USO 2 INDICI (UNO SCORRE AVANTI L'ALTRO INDIETRO)
    int i = len-1;
    int j=0;

    while(i>=0)
    {
        inversa[j]=parola[i];
        i--;
        j++;
    }
    
    //IMPORTANTE PER TERMINARE PAROLA APPENA DOPO AVER INVERTITO PAROLA (ALTRIMENTI DAREBBE SEMPRE NON PALINDROMA A CAUSA DEI CARATTERI CASUALI)
    inversa[j] = '\0';
    if(strcmp(inversa,parola)==0)
    {
        printf("Palindromia trovata!");
    }
    else{
        printf("Palindromia NON trovata");
    }
}