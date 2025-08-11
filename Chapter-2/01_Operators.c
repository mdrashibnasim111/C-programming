//w.a.p to demonstrate operators in C.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d;
    a=15;
    b=12;
    c=10;
    d=(b<c)==(a<c);               //  relational       > < <= >= == !=
    printf("%d\n",d); 
    d=(a+b)*c;                    //  arthmatical         + - * / %
    printf("addition of %d and %d with multiply by %d  is %d\n",a,b,c,d);
    getch();
}  

// % is used to find remainder
// == is used to compare two values
// != is used to check if two values are not equal (opposite of ==)
