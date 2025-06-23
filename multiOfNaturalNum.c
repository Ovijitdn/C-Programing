/*#include <stdio.h>

int main()
{
    int i, n, sum = 1;

    printf("Enter a Number :\n");

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum * i;

        printf("%d", i);

        if (i < n)
        {
            printf("*");
        }
    }
    printf("=%d", sum);

    return 0;
}*/


#include <stdio.h>

int ovi(int n)
{
    if (1 <= n)
    {

        printf("%d", n);
        if (1 < n)
        {
            printf("*");
        }
        return n * ovi(n - 1);
    }
    return 1;

}
int main()
{
    int n, multi;
    printf("Enter any num: ");
    scanf("%d", &n);
    multi = ovi(n);
    printf("= %d", multi);
    return 0;
}


