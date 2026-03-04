#include <stdio.h>
int main(void)
{
    float x,y,res;
    char op;
    FILE *fin, *fout;
    if((fin=fopen("operations.txt","r"))==NULL)
    {
        printf("Errore lettura");
    }
    if((fout=fopen("result.txt","w"))==NULL)
    {
        printf("Errore scrittura");
    }
    while(fscanf(fin," %c %f %f",&op,&x,&y)==3)
    {
            switch(op)
            {
                case '+':
                    res = x+y;
                    fprintf(fout,"%.2f %c %.2f = %.2f",x,op,y,res);
                break;
                case '-':
                    res = x-y;
                    fprintf(fout,"%.2f %c %.2f = %.2f",x,op,y,res);
                break;
                case '*':
                    res = x*y;
                    fprintf(fout,"%.2f %c %.2f = %.2f",x,op,y,res);
                break;
                case 'D':
                    res = x/y;
                    fprintf(fout,"%.2f %c %.2f = %.2f",x,op,y,res);
                break;
                default:
                    printf("Errore");
            }
    }
    fclose(fin);
    fclose(fout);
}