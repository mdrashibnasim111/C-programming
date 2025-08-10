//w.a.p to convert celcius(centigrade degree temperatures) to fahrenheit.

#include<stdio.h>
#include<conio.h>
int main()
{
    float c,d=1.8,f;  // conversion factor from Celsius to Fahrenheit
    printf("enter temperature in celcius\n");
    scanf("%f",&c);
    f=(c*d)+32;
    printf("temperature in fahrenheit is %f",f);
    getch();
    return 0;
}