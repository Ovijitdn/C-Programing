
#include <stdio.h>
int main()
{ 
     int item, i, n, position;
     printf("Enter how many number do you want input :");
     scanf("%d", &n);
     int a[n];
     for (i = 0; i < n; i++)
     {
         scanf("%d", &a[i]);
     }
     printf("Enter the position: ");
     scanf("%d", &position);
     printf("Enter a item which do wanna input :");
     scanf("%d", &item);
     for (i = n; i >= position; i--)
     {
         a[i] = a[i - 1];
     }
     a[position-1] = item;
     n++;
     for (i = 0; i < n; i++)
     {
         printf("%d ", a[i]);
     }

    return 0;
}
