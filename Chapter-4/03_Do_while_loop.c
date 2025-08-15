#include<stdio.h>
#include<conio.h>
int main()
{
    int n ,i=1;
    printf("enter the number :");
    scanf("%d",&n);
    do                               
    {
        printf("%d\n",i);
        i++;
    } 
    while (i<=n);
    return 0;
}

                          //       'while' checks the condition and then executes the code.
                          /*
                                   'd0-while' execute the code and then check the condition ,runs atleast one time 
                                    even if the condition is false.
                          */