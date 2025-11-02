/* Create a C program that allows the user to convert between Binary and Decimal systems based
on their choice, showcasing understanding of data encoding and computer number systems used in
hardware-level design*/

#include <stdio.h>

void DecimalToBinary()
{
    int num;
    printf("Enter your Decimal Number: ");
    scanf("%d", &num);

    int temp = num, Binary_Number = 0, Base = 1;
    
    while (temp != 0)
    {
        Binary_Number += (temp % 2) * Base;
        Base *= 10;
        temp /= 2;
    }
    printf("--- %d --- Decimal Number equals to --- %d --- Binary Number.", num, Binary_Number);
}

void BinaryToDecimal()
{
    int num;
    printf("Enter your Binary Number: ");
    scanf("%d", &num);

    int temp = num, Decimal_Number = 0, Base = 1;

    while (temp != 0)
    {
        Decimal_Number += temp%10 * Base;
        Base *= 2;
        temp /= 10;
    }

    printf("--- %d --- Binary Number equals to --- %d --- Decimal Number.", num, Decimal_Number);
}

int main()
{
    int choice;
    printf("1. Binary To Decimal\n2. Decimal to Binary\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) BinaryToDecimal();

    else if (choice == 2) DecimalToBinary();

    else printf("Invalid Input");

    return 0;
}