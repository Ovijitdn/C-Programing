#include<stdio.h>
int main()
{
int a,s=0;
scanf("%d",&a);
switch (a%2)
{
case 0:
    s++;
    break;
    case 1:
    s=s+2;
    break;

default:
    break;
}
printf("S=%d",s);
}