#include <stdio.h>

int main()
{
    int n, i, a, b, c;
    a = 0;
    b = 1;
    printf("Enter number of term: ");

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}