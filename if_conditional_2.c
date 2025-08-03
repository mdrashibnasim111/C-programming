#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(n==1)   //if we use { } in if statement, all statements inside { } will be executed according to if condition   
    {
        printf("one\n");
        printf("number\n");
        printf("code\n");
    }
    getch();
}    