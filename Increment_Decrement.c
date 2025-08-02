#include<stdio.h>
#include<conio.h>
void main()
{
    int a=5, b,c;
    b=a++;                    // Post-increment:     
    c=--b;                    // Pre-increment: 
    a=c++;                    // Post-increment: 
    b=a--;                    // Post-decrement: 
    printf("%d %d %d", a, b, c);
    getch();
}

// increment and decrement operators in C++ are only used with variables, not with constants or expressions.
// The output of this program will be: a=3,b=4,c=5