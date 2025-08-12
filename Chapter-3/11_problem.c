/*
Calculate income tax paid by an employee to the government as per the slabs mentioned below:
Income Slab	Tax
2.5L – 5.0L	    5%
5.0L – 10.0L	20%
Above 10.0L	    30%
*/

#include<stdio.h>
#include<conio.h>
int main ()
{
    float a ;
    printf("enter the tax paid(In lakh) :\n");
    scanf("%f",&a);
    if(a<2.5)
    {
    printf("there is no tax");
    }else if(a>=2.5 && a<=5.0)                   //&& is used to indicate range
           {
           printf("your tax will be 5%%");
           }else if(a>5.0 && a<=10.0)           //else-if condition (also called multiple if-else, ladders if-else)
                  {
                  printf("your tax will be 20%%");
                  }else if(a>10.0)
                          {
                          printf("your tax will be 30%%");
                          }
return 0;
}