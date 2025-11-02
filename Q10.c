/*Q10. Implement a program to find who and how many students scored “99” in the marks array,
emphasising data scanning and frequency counting.
*/

#include <stdio.h>

int main()
{
     int n;
     printf("enter the number of element in array : ");
     scanf("%d", &n);
     int arr[n];
     for (int i = 0; i < n; i++)
     {
          printf("enter the student's marks in array : ");
          scanf("%d", &arr[i]);
     }

     int count = 0;

     for (int i = 0; i < n; i++)
          if (arr[i] == 99)
               count++;

     printf("Student scored 99 appears \"%d\" times in the array.\n", count);
     return 0;
}