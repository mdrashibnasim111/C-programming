#include<stdio.h>
#include<conio.h>
void main()
{    
int a,b,c;                                     // declaration of variables
    printf("Enter two integers: ");           
    scanf("%d",&a);                            // input first integer by user 
    scanf("%d",&b);                            // input second integer by user
                                             /* we can also write scanf("%d %d",&a,&b); */ 
    c = a + b;
    printf("addition of %d and %d is %d ",a,b,c);
    getch();
}