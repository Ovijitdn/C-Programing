#include <stdio.h>

int main()
{
    int a, i, sum = 0;
    printf("Enter any number: ");
    scanf("%d", &a);
    for (i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == a)
    {
        printf("Perfect Number");
    }
    else
        printf("Not Perfect Number");

    return 0;
}
