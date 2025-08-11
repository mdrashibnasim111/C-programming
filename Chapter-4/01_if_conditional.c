#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if (n==1)
    printf("one\n");     //if we don't use { } in if statement,only first statement will be executed according to if condition
    printf("number\n");  // this will always execute ,wether if condition is true or false
    printf("code");      // this will always execute ,wether if condition is true or false
    getch();
}