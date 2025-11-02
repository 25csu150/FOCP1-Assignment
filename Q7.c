/*Q7.  Develop a C program to print a binary pyramid pattern.
0        0
01      01
010    010
0101  0101
0101001010*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j % 2 != 0) printf("%d", 0);
            else printf("%d", 1);
        }

        for (int k = 1; k <= 2*(n-i); k++) printf(" ");

        for (int l = 2*n + 1 - i; l <= 2*n; l++)
        {
            if (i % 2 != 0)
            {
                if (l % 2 == 0) printf("%d", 0);
                else printf("%d", 1);
            }
            
            else 
            {
                if (l % 2 != 0) printf("%d", 0);
                else printf("%d", 1);
            }
        }

        printf("\n");
    }
    return 0;
}