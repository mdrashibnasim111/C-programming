/*Write a program to determine whether a student has passed or failed.
To pass, a student requires a total of 40% and at least 33% in each subject.
Assume there are three subjects and take the marks as input from the user.*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int subject1 , subject2 , subject3;
    float total , percentage;
    printf("enter your marks of three subject\n");
    scanf("%d%d%d",&subject1,&subject2,&subject3);
    total=subject1+subject2+subject3;
    percentage=(total/300.0)*100;
    printf("your total percentage is :%.2f\n",percentage);
    if(percentage>=40)
    {
        if(subject1>=33)
        {
            if(subject2>=33)
            {
                if(subject3>=33)
                {
                    printf("you are passed :)");
                }
            }
        }
    }
    else
    printf("you are failed :(");   
return 0;
}

