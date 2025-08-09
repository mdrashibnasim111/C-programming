#include<stdio.h>
#include<conio.h>
void main() 
{
    //integer data type
    int a=5;
    //float (decimal number) data type
    float b= 2.66;
    //double (large decimal number) data type
    double c= 3.14159;
    //character data type
    char d = 'd';
    printf("Integer number: %d", a);             // %d is used to print integer values
    printf("decimal number: %f",b);              // %f is used to print decimal values
    printf("Large decimal number: %lf", c);      // %lf is used to print large decimal values
    printf("Character: %c", d);                  // %c is used to print character values
    getch();
    return 0;
}