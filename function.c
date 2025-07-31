#include <stdio.h>
int MyBig(int x, int y)
{
    int m;
    if (x > y)
        m = x;
    else
        m = y;
    return m;
}
int fact(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}
int main()
{
    int m, a, b, c;
    int f, n;
    printf("Enter three number :\n");
    scanf("%d%d%d", &a, &b, &c);
    m = MyBig(a, b);
    m = MyBig(m, c);
    printf("Enter a number:");
    scanf("%d", &n);
    f = fact(n);
    printf("Max = %d\n", m);
    printf("Factorial = %d", f);
}