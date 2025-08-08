#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i;
    char str [100];               // Declare a character array to hold the string
    printf("your name\n");
    scanf("%s",str);              // %s reads a string until whitespace
    i=0;
    while(str[i]!= '\0')         // Loop until the null terminator is reached
    {
        printf(" %c",str[i]);
        i++;
    }
    getch();

}