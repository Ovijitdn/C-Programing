#include <stdio.h>
int main()
{
    int i, j, a, b;
    printf("How many row do u wanna for 1st matrix: ");
    scanf("%d", &a);
    printf("How many column do u wanna for 1st matrix: ");
    scanf("%d", &b);
    int arr1[a][b];
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    int c, d;
    printf("How many row do u wanna for 2nd matrix: ");
    scanf("%d", &c);
    printf("How many column do u wanna for 2nd matrix: ");
    scanf("%d", &d);
    int arr2[c][d];
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < d; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    if (b == c)
    {
        int e[a][d];
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < d; j++)
            {
                e[i][j] = 0;
                for (int k = 0; k < b; k++)
                {
                    e[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }

        for (i = 0; i < a; i++)
        {
            for (j = 0; j < d; j++)
            {
                printf("%d ", e[i][j]);
            }
            printf("\n");
        }
    }
    else
    printf("Cannot multiply\n");

    return 0;
}
