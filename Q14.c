/* Develop a C program to count the number of prime numbers in an array.
 */

#include <stdio.h>
#include <stdbool.h>

int main()
{
     int n;

     printf("Enter the number of element in array : ");
     scanf("%d", &n);

     int arr[n];
     for (int i = 0; i < n; i++)
     {
          printf("Enter the element in array: ");
          scanf("%d", &arr[i]);
     }
     int count = 0;

     for (int i = 0; i < 10; i++)
     {
          if (arr[i] <= 1)
               continue;

          bool isPrime = true;

          for (int j = 2; j <= arr[i] / 2; j++)
          {
               if (arr[i] % j == 0)
               {
                    isPrime = false;
                    break;
               }
          }

          if (isPrime)
               count++;
     }

     printf("Number of prime numbers in the array: %d\n", count);

     return 0;
}
