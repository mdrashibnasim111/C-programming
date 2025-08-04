//w.a.p to make a multiplication table using while loop.
//
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    printf("enter a number \t");
    scanf("%d", &n);
    i=1;
    while(i>=1 && i<=10)  // && is used to set limit (Loop from 1 to 10)
    {
        printf("%d\n",n*i);
        i++;
    }
    getch();
}
    