/*Q5. Develop a C program to determine the quadrant in which a given coordinate point (x, y) lies on
the XY plane, illustrating the use of conditional statements and coordinate geometry logic relevant in
game development and robotics navigation*/

#include <stdio.h>

int main()
{
     int x, y;
     printf("Enter the values of x and y co-ordinates: ");
     scanf("%d %d", &x, &y);

     if (x > 0)
     {
          if (y > 0)
               printf("The point (%d, %d) lies in the First Quadrant.\n", x, y);
          else
               printf("The point (%d, %d) lies in the Fourth Quadrant.\n", x, y);
     }

     else
     {
          if (y > 0)
               printf("The point (%d, %d) lies in the Second Quadrant.\n", x, y);
          else
               printf("The point (%d, %d) lies in the Third Quadrant.\n", x, y);
     }

     return 0;
}