/*Q12. Develop a C program to find the maximum and minimum scores in an array, applying
comparative logic for ranking and analysis.
*/

#include <stdio.h>

int main()
{
     int n;
     printf("Enter number of elements you want to enter: ");
     scanf("%d", &n);

     int arr[n];

     for (int i = 0; i < n; i++)
     {
          printf("Enter score %d: ", i + 1);
          scanf("%d", &arr[i]);
     }

     printf("Maximum element is: ");

     int max = arr[0];
     for (int i = 1; i < n; i++)
          if (arr[i] > max)
               max = arr[i];
     printf("%d\n", max);

     printf("Minimum element is: ");

     int min = arr[0];
     for (int i = 1; i < n; i++)
          if (arr[i] < min)
               min = arr[i];
     printf("%d\n", min);

     return 0;
}