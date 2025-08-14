//w.a.p to print natural numbers from  10 to 20 when initial loop counter is initialized to 0 .
#include<stdio.h>
#include<conio.h>
int main()
{
    int a=0;
    while(a<=20)
    {
        if (a>=10)
        {
            printf("the natural numbers are %d\n",a);
        }
          a++;
    }
return 0;
}