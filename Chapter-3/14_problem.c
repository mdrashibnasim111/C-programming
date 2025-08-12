//Write a program to determine whether a character entered by the user is lowercase or not.
#include <stdio.h>
#include<conio.h>
int main()
 {
    char ch;

    printf("Enter a character: ");     //   https://www.ascii-code.com/
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')                             /*
                                     In C, every character is stored as an ASCII value (a number behind the scenes).
                                                                              For example:
                                                                               'a' → 97
                                                                               'z' → 122
                                                                               'A' → 65
                                                                               'Z' → 90
                                                            */
    {                               //This checks if the character is in the range from 'a' to 'z'
        printf("The character '%c' is lowercase.\n", ch);
    } 
    else 
    {
        printf("The character '%c' is NOT lowercase.\n", ch);
    }

    return 0;
}
