/*#include<stdio.h>
#include<math.h>
int main ()
{
    int a,b,c;
    float s,area;
    printf("Enter any three number: ");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of this triangle= %f",area);
    return 0;

}*/


#include<stdio.h>
#include<math.h>
int main ()
{
    int r;
    float area,pi=3.1416;
    printf("Enter the radius: ");
    scanf("%d",&r);
    area=pi*r*r;
    printf("Area of this circle= %.2f",area);
    return 0;

}


