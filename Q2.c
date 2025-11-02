/* Q2. Construct a C program to find the HCF (Highest Common Factor) of two integers using
iterative or recursive logic — a core operation in optimisation algorithms and cryptographic
computations*/

#include <stdio.h>

int main()
{
     int num1, num2, min, hcf = 1;

     printf("Enter any two numbers to find HCF: ");
     scanf("%d%d", &num1, &num2);

     min = (num1 < num2) ? num1 : num2;

     for ( int i = 1; i <= min; i++)
     {
          if (num1 % i == 0 && num2 % i == 0)
          {
               hcf = i;
          }
     }

     printf("HCF of %d and %d = %d\n", num1, num2, hcf);

     return 0;
}