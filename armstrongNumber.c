#include <stdio.h>
#include<math.h>
int main()

{
    int r, n, sum = 0,c;
    printf("Enter any Number :");
    scanf("%d", &n);
    c=n;
    while (n > 0)   //1*1*1+5*5*5+3*3*3=153 
    {
        r = n % 10;
        sum = sum + (r*r*r);
        n = n / 10;
    }
    if (sum == c)
    {
        printf("%d is Armstrong number.",c);
    }
    else

    {
        printf("%d is not Armstrong number.",c);
    }
    return 0;
}
