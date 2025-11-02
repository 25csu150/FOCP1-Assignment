/*Q4. Implement a C program to swap two numbers using four different methods, demonstrating
diverse approaches such as arithmetic, bitwise XOR, pointer manipulation, and temporary variable
usage — a key skill in memory and variable management*/

#include <stdio.h>

int main()
{
     int a, b, t;
     printf(" Enter value of A ?  ");
     scanf("%d", &a);
     printf(" Enter value of B ?  ");
     scanf("%d", &b);

     printf("\n Before swapping : A= %d, B= %d", a, b);

     //first method using third variable
     t = a;
     a = b;
     b = t;
     printf("\n After swapping (First method) : A= %d, B= %d\n", a, b);

     //second method without using third variable
     a = a + b;
     b = a - b;
     a = a - b;
     printf("\n After swapping (second method): A= %d, B= %d\n", a, b);

     //Third method  using X-Or 
     a ^= b;
     b ^= a;
     a ^= b;
     printf("\n After swapping (third method) : A= %d, B= %d\n", a, b);

     //fourth method  (single statement)
     a = a + b - (b = a);
     printf("\n After swapping (fourth method): A= %d, B= %d\n", a, b);

     return 0;
}