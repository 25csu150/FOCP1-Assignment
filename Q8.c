/*Q8. Develop a C program to generate the Fibonacci series up to ‘n’ terms, where each term is the
sum of the two preceding ones.
0, 1, 1, 2, 3, 5, 8, 13, ...
*/

#include <stdio.h>

int main()
{
     int n, first_digit = 0, second_digit = 1, nextTerm;

     printf("Enter the number of terms: ");
     scanf("%d", &n); // Input number of terms

     printf("Fibonacci Series: %d, %d", first_digit, second_digit);

     for (int i = 3; i <= n; ++i)
     {
          nextTerm = first_digit + second_digit;
          printf(", %d", nextTerm);
          first_digit = second_digit;
          second_digit = nextTerm;
     }

     return 0;
}