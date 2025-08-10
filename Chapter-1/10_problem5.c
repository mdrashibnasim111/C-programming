/*
w.a.p to calculate simple interest for a set of values representing principal,
number of years and rate of interest.
*/

#include <stdio.h>
int main()
{
    float principle , rate , years , simple_interest;
    printf("Enter the principle amount: ");
    scanf("%f",&principle);
    printf("Enter the rate of interest: ");
    scanf("%f%%",&rate);     
    printf("Enter the number of years: ");
    scanf("%f",&years);
    simple_interest= (principle*rate*years)/100;
    printf("the simple interest is : %.2f,\n for the principle amount %.2f at \n %.2f%% rate of interest for \n %.2f years.\n", 
           simple_interest, principle, rate, years);

    return 0;   
}