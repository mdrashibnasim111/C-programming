//w.a.p to enter two number and print addition, subtraction, multiplication and division of two numbers.
#include<stdio.h>
#include<conio.h>   
void main()
{
    int a,b,c;
    printf("enter two number\n");
    scanf("%d %d",&a,&b);
    c = a +b;
    printf("addition of %d and %d is %d",a,b,c);     
    c=a-b;
    printf("\nsubtraction of %d and %d is %d",a,b,c);
    c=a*b;
    printf("\nmultiplication of %d and %d is %d",a,b,c);
    c=a/b;
    printf("\ndivision of %d and %d is %d",a,b,c);
    getch();
} 
