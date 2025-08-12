#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(n>10)            //only first statement will execute according to given condition & value 
    printf("\"hello\t");
    else
    printf("\"bye\t");   //only first statement will execute according to given condition & value, same as if conditional
    printf("world\"");
    getch();
}                                        



                         //if n=20, output will be "hello world"
                         //if n=5, output will be " bye world"