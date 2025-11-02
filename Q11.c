/*Q11. Develop a C program to tranverse an array of scores, determine whether each score is even or
odd using conditional logic, and store them into two separate arrays — even_array and odd_array.
*/

#include <stdio.h>

int main()
{
     int n;
     printf("Enter number of scores you want to enter: ");
     scanf("%d", &n);

     int scores[n], even_array[n], odd_array[n];

     for (int i = 0; i < n; i++)
     {
          printf("Enter score %d: ", i + 1);
          scanf("%d", &scores[i]);
     }

     for (int i = 0; i < n; i++)
     {
          if (scores[i] % 2 == 0)
          {
               even_array[i] = scores[i];
               odd_array[i] = -1;
          }

          else
          {
               odd_array[i] = scores[i];
               even_array[i] = -1;
          }
     }

     printf("Even scores are: ");
     for (int i = 0; i < n; i++)
          if (even_array[i] >= 0)
               printf("%d ", even_array[i]);

     printf("\nOdd scores are: ");
     for (int i = 0; i < n; i++)
          if (odd_array[i] >= 0)
               printf("%d ", odd_array[i]);

     return 0;
}