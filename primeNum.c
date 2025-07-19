
#include <stdio.h>

int main()
{
    int n, i, k = 0;

    printf("Enter any number: ");

    scanf("%d", &n);

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            k = 1;
    }
    if (k == 0)
        printf("prime");
    else
        printf("Not prime");
    return 0;
}

/*#include <stdio.h>

int main()
{
    int i, n, count = 0;
    printf("Enter any number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}
*/

/*#include <stdio.h>
int main()
{
    int n, i, j;
    int count1 , count2 = 0;
    printf("Enter the range: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        count1=0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count1++;
            }
        }
        if (count1 == 2)
        {

            printf("%d ",i);
            count2++;
        }
    }
    printf("\nNumber of prime num: %d\n", count2);
    return 0;
}*/