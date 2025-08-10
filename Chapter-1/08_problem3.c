/*write the area of a circle and 
modify the same program to calculate the volume of a cylinder given it's radius and height.*/

#include<stdio.h>
#include<conio.h>
#define PI 3.141592653589793
void main()

{
    int r,a,h,v;
    float pi;
    printf("enter the radius of circle\n");
    scanf("%d",&r);
    pi=PI;
    a=pi*r*r;
    printf("area of circle is : %d\t",a);
    printf("\nenter the height of cylinder\n");
    scanf("%d",&h);
    v=pi*r*r*h;
    printf("volume of cylinder is : %d",v);
    getch();
    return 0;
}