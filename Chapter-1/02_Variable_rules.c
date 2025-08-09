#include<stdio.h>
#include<conio.h>
void main()
{
    int a=50 , b=30 , c;                               // declariation of variables
    c = a + b;                                         //c is in first beacuse, c is based on stack memory and it is runs on (LIFO)last in first out principle
    printf("addition of %d and %d is %d", a, b, c);    // %d is used to print integer values
    getch();                           
}                                          


                 /*
                     RULES :-
                     we can only use "alphabets" and "_ underscore" in variable name
                 */