/*Q13. Design a C program to find a peak element that is not smaller than its neighbours.
 */

#include <stdio.h>

int main()
{
     int arr[10] = {1, 3, 2, 15, 20, 18, 22, 17, 30, 25};

     for (int i = 1; i < 9; i++)
     {
          if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
          {
               printf("1st Peak element is: %d\n", arr[i]);
               break;
          }
     }

     return 0;
}