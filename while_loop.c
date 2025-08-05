//w.a.p to make a multiplication table using while loop.
//
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    printf("enter a number \t");
    scanf("%d", &n);
    i=1;                                     //initializing 
    while(i<=10)                             // Condition 
    {
        printf("%d\n",n*i);
        i++;                                 //increment / Decrement
    }
    getch();
}
    