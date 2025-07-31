//w.a.p to enter two numbers and print swapping of these two numbers using 3 variables.
#include <stdio.h>  
#include<conio.h> 
void main()
{
    int a,b,c;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    printf("before swapping  a is %d, b is %d\n", a, b);
    c=a;                                                         //logic
    a=b;                                                         //logic 
    b=c;                                                         //logic
    printf("after swapping a is %d, b is %d\n",a , b);
    getch();
}