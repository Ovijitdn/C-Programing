#include <stdio.h>

int main()
{
    int a, i;

    printf("Enter a number:\n");

    scanf("%d", &a);

    for (i = 1; i <= 10; i++)
    {
        printf("%d*%d=%d\n ", a,i,i*a);
    }

    return 0;
}
