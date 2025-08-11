#include<stdio.h>
#include<conio.h>
int main()
{
    int a=5, b,c;
    b=a++;                    // Post-increment: first assign,then increment   
    c=--b;                    // Pre-increment: first decrement, then assign
    a=c++;                    // Post-increment: first assign, then increment
    b=a--;                    // Post-decrement: first assign, then decrement
    printf("%d %d %d", a, b, c);
    getch();
}

// increment and decrement operators in C++ are only used with variables, not with constants or expressions.
// The output of this program will be: a=3,b=4,c=5