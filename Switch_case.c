#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter a number \t");
    scanf("%d", &n);
    switch (n)
    {
        case 1: printf("you entered one\n");break;    //break is used to exit the switch case after executing.
        case 2: printf("you entered two\n");break;
        case 3: printf("you entered three\n");break;
        case 4: printf("you entered four\n");break;
        case 5: printf("you entered five\n");break;
        default: printf("you entered a number greater than five or less than one\n");break;
    }
    getch();
}