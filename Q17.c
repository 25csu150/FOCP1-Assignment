/*Q17. Design a C program to delete an element from the front, middle, or end of an array, and print
the array before and after deletion.
*/

#include <stdio.h>

void Deletion(int a[], int size)
{
     int pos;

     printf("\n\nEnter the position to delete element: ");
     scanf("%d", &pos);

     for (int i = pos; i < size; i++)
          a[i - 1] = a[i];

     printf("\nArray after deletion:\n");
     for (int i = 0; i < size - 1; i++)
          printf("%d ", a[i]);
}
int main()
{
     int a[] = {10, 20, 25, 12, 19, 23, 15, 8, 3, 26};
     int n = sizeof(a) / sizeof(a[0]);

     printf("\nArray before operation:\n");
     for (int i = 0; i < n; i++)
          printf("%d ", a[i]);

     Deletion(a, n);

     return 0;
}