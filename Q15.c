/*  Q15.Write a C program to cyclically rotate the array clockwise by one position, applying array
transformation logic used in scheduling and encryption.

Input: arr[] = {1, 2, 3, 4, 5}

Output: arr[] = {5, 1, 2, 3, 4}

Input: arr[] = {2, 3, 4, 5, 1}

Output: {1, 2, 3, 4, 5}
*/

void reverse(int arr[], int pos, int length)
{
     for (int i = pos; i < length; i++, length--)
     {
          int temp = arr[length];
          arr[length] = arr[i];
          arr[i] = temp;
     }
}

#include <stdio.h>

int main()
{
     int arr[5];

     for (int i = 0; i < 5; i++)
     {
          printf("Enter element %d: ", i + 1);
          scanf("%d", &arr[i]);
     }

     printf("\nArray before transformation:\n");

     for (int i = 0; i < 5; i++)
          printf("%d ", arr[i]);

     reverse(arr, 0, 4);    //  reverse the entire array
     reverse(arr, 1, 4);     //  reverse from index 1 to end

     printf("\n\nArray after transformation:\n");

     for (int i = 0; i < 5; i++)
          printf("%d ", arr[i]);

     return 0;
}
