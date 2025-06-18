#include <stdio.h>
int main()
{
    int item, i, n;
    printf("Enter how many number do you want input :");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter a item which do wanna input :");
    scanf("%d", &item);

    n++;
    for (i = n; i > 1; i--)
    {
        a[i - 1] = a[i - 2];
    }
    a[0] = item;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}
