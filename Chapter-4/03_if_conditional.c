#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if (n==1)                                         
    printf("one");
    if (n==2)
    printf("two");                          
    if (n==3)
    printf("three");
    if (n==4)                            //this if if if if .... is known as if ladder-if statement
    printf("four");                      //Each condition is always checked, even if a previous one is true.
    if(n==5)                             //Slower if the number of conditions is large.
    printf("five");                      //Useful if multiple conditions can be true at the same time.
    if(n==6)
    printf("six");
    if(n<1 || n>6)                    
    printf("invalid");
    getch();
}                                       //to fix these all , we will use IF-ELSE statement in next file
                                        //And we use only when one condition is true at a time.