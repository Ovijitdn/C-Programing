#include <stdio.h>
int main()
{
    int i, j, temp, n1, n2, n;
    printf("1st array:\n\n");
    printf("How many:");
    scanf("%d", &n1);
    int a[n1];
    printf("Digits:");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("2nd array:\n\n");
    printf("How many:");
    scanf("%d", &n2);
    int b[n2];
    printf("Digits:");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }
    n = n1 + n2;
    int c[n];
    for (i = 0; i < n - n2; i++)
    {
        c[i] = a[i];
    }
    for (i = 0; i < n - n1; i++)
    {
        c[n1 + i] = b[i];
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (c[i] > c[j])
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", c[i]);
    }
}