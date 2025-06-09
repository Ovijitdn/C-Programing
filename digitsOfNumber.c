#include <stdio.h>

int main()
{
    int n, count;

    printf("Enter any number :");

    scanf("%d", &n);

    while (n > 0)
    {
        n /= 10;
        count++;
    }
    printf("Total %d digits: ", count);
    return 0;
}
