//what if we use semicolon ; in IF-ELSE conditional in c ?
#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter a number\t");
    scanf("%d",&n);
    if (n>50)
    ;                                  // only a semicolon is called a blank statement
    else                                            
    printf("world");
    getch();
}    



 //if we print many statements in IF-condition without { } then misplace of else error type will show ,
 // to fix this we need to add { } in IF-ELSE statement or we have to use only one statement in IF-condition.