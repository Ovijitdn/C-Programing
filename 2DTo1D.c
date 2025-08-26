#include <stdio.h>

int main()
{
    int ax[4][3];
    printf("Enter 12 elements for a 4x3 array (row-wise):\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("ax[%d][%d]: ", i, j);
            scanf("%d", &ax[i][j]);
        }
    }
    printf("\n2D array formation:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", ax[i][j]); 
        }
        printf("\n");
    }
    int bx[12], t = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            bx[t] = ax[i][j];
            t++;
        }
    }
    printf("\n1D array formation:\n");
    for (int i = 0; i < 12; i++)
    {
        printf("%d ", bx[i]);  
    }
    printf("\n");
    return 0;
}
