/* Q16. Implement a C program to insert an element at the front, middle, or end of an array, and print
the array before and after insertion.
*/
#include <stdio.h>

void Insertion(int a[], int size)
{
    int pos, val;

    printf("\n\nEnter the position to insert an element: ");
    scanf("%d", &pos);

    printf("Enter the value: ");
    scanf("%d", &val);

    for (int i = size; i >= pos - 1; i--) a[i+1] = a[i];

    a[pos - 1] = val;

    printf("\nArray after insertion:\n");
    for (int i = 0; i < size + 1; i++) printf("%d ", a[i]);
}

int main()
{
    int a[] = {10, 20, 25, 12, 19, 23, 15, 8, 3, 26};
    int n = sizeof(a) / sizeof(a[0]);

    printf("\nArray before operation:\n");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);

    Insertion(a, n);

    return 0;
}