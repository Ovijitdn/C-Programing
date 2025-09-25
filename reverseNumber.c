#include <stdio.h>

int main()
{
    int n, r;
    for (;;)
    {
        printf("\nEnter any number :");
        scanf("%d", &n);
        if (n < 0)
        {
            printf("End of the program run");
            break;
        }
        printf("The reverse number:");
        while (n > 0)
        {
            r = n % 10;

            printf("%d", r);

            n = n / 10;
        }
    }
    return 0;
}
