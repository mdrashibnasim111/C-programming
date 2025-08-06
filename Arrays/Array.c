#include<stdio.h>
#include<conio.h>
int main()
{
    int ar[10],i;
    printf("Enter 10 elements in the array:\n");
    for(i=0;i<10;i++) 
    {
      scanf("%d",&ar[i]);
    }
    printf("The elements in the array are:\n");
    for(i=0;i<10;i++) 
    {   
      printf("%d ",ar[i]);
    }  
    getch();
    return 0;
}