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
    for (i = 0; i < N; i++) 
    {
        for (j = i+1; j < N; j++)
            if (v[i] > v[j])
            {
                temp = v[j];
                v[j] = v[i];
                v[i] = temp;
    }
    }
    for (int i=0; i<N;i++)
    {
        printf("%d ",v[i]);
    }
    return 0;
}