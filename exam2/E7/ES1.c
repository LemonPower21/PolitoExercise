#include <stdio.h>

int main(void)
{
    int n;
    int a = 0; 
    int b = 1;
    int prossimo;

    printf("Quanti numeri della sequenza vuoi visualizzare? ");
    scanf("%d", &n);

    printf("Sequenza: ");

    for (int i = 0; i < n; i++)
    {
        if (i <= 1) 
        {
            prossimo = i;
        } 
        else 
        {
            prossimo = a + b;
            a = b;      
            b = prossimo; 
        }
        printf("%d ", prossimo);
    }
    printf("\n");

    return 0;
}