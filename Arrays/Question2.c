//n number of elements in an array and their sum.
#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[500],i,n,sum=0;            //cant fix the size of array, so we take a large number.
    printf("enter the limit\n");
    scanf("%d",&n);                    // we taken n as the number of elements ,which is input by user.
    printf("enter the elemennts\n");
    for(i=0;i<n;i++)
    scanf("%d\t",&arr[i]);
    printf("the elements in the array are :\n"); 
    for(i=0;i<n;i++)                               //for loop to print the elements of array.
    {
    printf("%d\t", arr[i]);
    sum=sum+arr[i];                     //formula to find the sum of elements in an array.
    }
    printf("\nthe sum of n elements of array is %d",sum);
    getch();
    return 0;
}