// Write a program to find the greatest of four numbers entered by the user.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    printf("Enter third number :");
    scanf("%d",&c);
    printf("Enter fourth number :");
    scanf("%d",&d);
    if(a>b && a>c && a>d)                                        
    {
    printf("%d is greatest of all number",a);
    }else if (b>a ,b>c ,b>d)
            {
                 printf("%d is greatest of all number",b);
            }else if (c>a ,c>b ,c>d)
                   {
                    printf("%d is greatest of all number",c);
                   }else if(d>a ,d>b ,d>c)
                           {
                            printf("%d is greatest of all number",d);
                           }
    
    return 0;
}