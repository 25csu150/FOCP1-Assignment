/* Design a C program to find the first occurrence of the score “99” in an array, focusing on linear
search and data retrieval techniques.
*/

#include <stdio.h>

int main()
{
     int n;
     printf("enter the number of element in array : ");
     scanf("%d", &n);
     int a[n];
     for (int i = 0; i < n; i++)
     {
          printf("enter the value of elements in array : ");
          scanf("%d", &a[i]);
     }

     for (int i = 0; i < 5; i++)
     {
          if (a[i] == 99)
          {
               printf("Element found at index \"%d\" and position \"%d\"", i, i + 1);
               break;
          }
     }
     printf("No element found (score = 99)");
     return 0;
}