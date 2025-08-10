//w.a.p to enter marks of 4 subject of a student.
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,e,f;
    printf("enter marks of physics\n");
    scanf("%d",&a);
    printf("enter marks of chemistry\n");
    scanf("%d",&b);
    printf("enter marks of maths\n");
    scanf("%d",&c);
    printf("enter marks of english\n");
    scanf("%d",&d);
    e=a+b+c+d;                                                  //logic
    printf("total marks is %d\n",e);
    f=e/40*10;                                                //logic
    printf("percentage is %d",f);                              //logic
    getch();
}