#include <stdio.h>

int main()
{
    int a, b;
    printf("enter two number: ");
    scanf("%d%d", &a, &b);

    printf("Bitwise AND %d\n", a & b);
    printf("Bitwise OR %d\n", a | b);
    printf("Bitwise XOR %d\n", a ^ b);
    return 0;
}
