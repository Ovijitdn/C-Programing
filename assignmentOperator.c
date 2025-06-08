#include <stdio.h>

int main()
{
    int a;
    a = 10;
    printf("%d\n", a += 5);
    a = 10;
    printf("%d\n", a -= 5);
    a = 10;
    printf("%d\n", a *= 5);
    a = 10;

    printf("%d\n", a /= 5);
    a = 10;
    printf("%d\n", a %= 5);

    return 0;
}
