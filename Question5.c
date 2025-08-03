//w.a.p to verify wether the given is even or odd.
#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter a number\t");
    scanf("%d",&n);
    if(n%2==0)
    {                                                 //used if-else condition.
        printf("given number is even");
    }
    else 
    {
        printf("given number is odd" );
    }
    getch();
}