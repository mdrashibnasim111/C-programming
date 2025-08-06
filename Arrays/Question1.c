//sum of elements of an array .
#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[10],i,sum=0;
    for(i=0;i<10;i++)
    {
        printf("enter the elements:");
        scanf("%d", &arr[i]);
    }
    printf("the elements in the array are:");
    for(i=0;i<10;i++)
    {
        printf("%d\t", arr[i]);
        sum=sum+arr[i];
    }
        printf("\nthe sum of elements of array is %d", sum);
    return 0;
}