//w.a.p to calculate the area of a reactangle (using input supplied by user)
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("enter the lemghth of rectangle\n");
    scanf("%d",&a);
    printf("enter the breadth of rectangle\n");
    scanf("%d",&b);
    c=a*b;
    printf("area of rectangle is %d",c);
    getch();
    return 0;
}