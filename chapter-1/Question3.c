//w.a.p to enter two numbers and print swapping of these two numbers using 2 variables.
#include <stdio.h>  
#include<conio.h> 
void main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    printf("before swapping  a is %d, b is %d\n", a, b);
    a=a+b;                                                         //logic
    b=a-b;                                                         //logic 
    a=a-b;                                                         //logic
    printf("after swapping a is %d, b is %d\n",a , b);
    getch();
}