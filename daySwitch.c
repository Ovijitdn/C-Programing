#include<stdio.h>
int main()
{
    int a;
    printf("Enter a num among 1 to 7\n");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("SETURDAY");
        break;
    case 2:
        printf("SUNDAY");
        break;
    case 3:
        printf("MONDAY");
        break;        
    case 4:
        printf("TUESDAY");
        break;
    case 5:
        printf("WEDNESDAY");
        break;
    case 6:
        printf("THURSDAY");
        break; 
     case 7:
        printf("FRIDAY");
        break;   
    default:
    printf("error");
        break;
    }
    return 0;
}
