#include <stdio.h>
int main()
{
    int a, i, s = 0;
    printf("How many number do you want to add: ");
    scanf("%d", &a);
    int A[a];
    for (i = 0; i < a; i++)
    {
        scanf("%d", &A[i]);
    }
    for (i = 0; i < a; i++)
    {
        s = s + A[i];
        printf("%d", A[i]);
        if (i < a)
        {
            if ((a - 1) == i)
                continue;
            printf("+");
        }
        }
    printf("= %d", s);
    return 0;
}
