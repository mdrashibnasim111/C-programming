#include<stdio.h>
#include<conio.h>
void main()
{    
int a,b,c;                                     // declaration of variables
    printf("Enter two integers: ");           
    scanf("%d",&a);                            // input first integer by user
    scanf("%d",&b);                            // input second integer by user
    c = a + b;
    printf("addition of %d and %d is %d ",a,b,c);
    getch();
}