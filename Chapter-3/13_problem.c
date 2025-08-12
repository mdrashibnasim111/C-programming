// Write a program to find whether a year entered by the user is a leap year or not.
// Take year as an input from the user.

#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the year :");
    scanf("%d",&a);
    if(a%4==0)                                             //for leap year, year must be divisible by 4
    {
    printf("This is a leap year");
    }
    else
    printf("This is not a leap year");
    return 0;
}